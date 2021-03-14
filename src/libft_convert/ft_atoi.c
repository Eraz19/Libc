#include "libft_convert.h"
#include "libft_char.h"

t_sint 									ft_atoi(t_char const* str)
{
	t_sint								result;
	t_sint								result_sign;
	t_size								i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (0);
	#endif

	i = 0;
	result = 0;
	result_sign = POSITIVE;

	while (str[i] != '\0' && ft_isspace(str[i]) == TRUE)
		++i;

	if ((str[i] == '-' && (result_sign = NEGATIVE)) || str[i] == '+')
		++i;

	while (str[i] != '\0' && ft_isdigit(str[i]) == TRUE)
	{
		result *= 10;
		result += (str[i] - '0');
		++i;
	}

	return (result * result_sign);
}
