#include "libft_convert.h"
#include "libft_string.h"
#include "libft_math.h"

static t_u64							convert_to_u64(t_char const* str, t_char const* base, t_size radix)
{
	t_sint								i;
	t_size								rank;
	t_sint 								char_base_value;
	t_u64 								result;

	i = (ft_strlen(str) - 1);
	result = 0;
	rank = 0;

	while(i >= 0)
	{
		char_base_value = ft_strichr(base, str[i]);
		if (char_base_value != -1)
			result += (char_base_value * ft_pow(radix, rank));
		else
			return (0);

		++rank;
		--i;
	}

	return (result);
}

t_u64									ft_strbase_to_u64(t_char const* str, t_char const* base)
{
	t_u64 								result;
	t_size								radix;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || base == NULL)
			return (0);
	#endif

	radix = ft_strlen(base);

	if (radix == 0 || radix == 1)
		return (0);

	result = convert_to_u64(str, base, radix);
	return (result);
}
