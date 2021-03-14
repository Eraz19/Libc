#include "libft_convert.h"
#include "libft_string.h"

static void								convert_to_base(t_u64 nbr, t_char* result, t_char const* base, t_size radix)
{
	t_u8								temp;
	t_size								i;

	i = 0;

	while (nbr != 0)
	{
		temp = nbr % radix;
		nbr /= radix;
		result[i] = base[temp];
		++i;
	}

	result[i] = '\0';
}

t_char*									ft_u64_to_strbase(t_u64 nbr, t_char const* base)
{
	t_char  							result[SIZE_64BITS_BIN_BUFFER];
	t_size 								radix;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (base == NULL)
			return NULL;
	#endif

	radix = ft_strlen(base);

	if (radix == 0 || radix == 1)
		return (NULL);

	convert_to_base(nbr, result, base, radix);

	return (ft_strrev(result));
}
