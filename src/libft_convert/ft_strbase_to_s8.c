#include "libft_convert.h"
#include "libft_string.h"
#include "libft_math.h"

static t_s8								convert_to_s8(t_char const* str, t_char const* base, t_size radix)
{
	t_sint								i;
	t_size								rank;
	t_sint 								char_base_value;
	t_s8 								result;

	i = (ft_strlen(str) - 1);
	result = 0;
	rank = 0;

	while(i >= 0)
	{
		if (i == 0 && str[i] == '-')
			result *= -1;
		else
		{
			char_base_value = ft_strichr(base, str[i]);
			if (char_base_value != -1)
				result += (char_base_value * ft_pow(radix, rank));
			else
				return (0);
		}

		++rank;
		--i;
	}

	return (result);
}

t_s8									ft_strbase_to_s8(t_char const* str, t_char const* base)
{
	t_s8 								result;
	t_size								radix;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || base == NULL)
			return (0);
	#endif

	radix = ft_strlen(base);

	if (radix == 0 || radix == 1)
		return (0);

	result = convert_to_s8(str, base, radix);
	return (result);
}
