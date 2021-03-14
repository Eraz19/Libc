#include "libft_string.h"

t_size									ft_strlen(t_char const* str)
{
	t_size								str_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (0);
	#endif

	str_len = 0;

	while (str[str_len] != '\0')
		++str_len;

	return (str_len);
}
