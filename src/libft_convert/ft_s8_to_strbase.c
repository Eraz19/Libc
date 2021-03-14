#include "libft_convert.h"
#include "libft_string.h"
#include <stdio.h>

static void								get_result_sign(t_s8 nbr, t_char* result, t_size i)
{
	if (nbr < 0)
	{
		result[i] = '-';
		++i;
	}
	result[i] = '\0';
}

static t_size							convert_to_base(t_s8 nbr, t_char* result, t_char const* base, t_size radix)
{
	t_u8								temp;
	t_size 								i;

	i = 0;

	if (nbr < 0)
		nbr *= -1;

	while (nbr >= 0)
	{
		temp = nbr % radix;
		nbr /= radix;

		result[i] = base[temp];

		++i;
	}

	return (i);
} 

static t_bool	 						is_base_valid(t_char const* base)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (base == NULL)
			return FALSE;
	#endif

	for (t_size i = 0; base[i] != '\0'; ++i)
	{
		if (base[i] == '+' || base[i] == '-')
			return (FALSE);

		for (t_size j = 0; base[j] != '\0'; ++j)
			if (base[i] == base[j] && j != i)
				return (FALSE);
	}

	return (TRUE);
}

t_char*									ft_s8_to_strbase(t_s8 nbr, t_char const* base)
{
	t_char  							result[SIZE_8BITS_BIN_BUFFER];
	t_size 								radix;
	t_size								i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (base == NULL)
			return NULL;
	#endif

	if (is_base_valid(base) == FALSE)
		return (NULL);

	radix = ft_strlen(base);

	if (radix == 0 || radix == 1)
		return (NULL);

	i = convert_to_base(nbr, result, base, radix);
	get_result_sign(nbr, result, i);

	return (ft_strrev(result));
}
