#include "libft_string.h"

t_sint									ft_strichr(t_char const* str, t_char c)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (-1);
	#endif

	for (t_size i = 0; str[i] != '\0'; ++i)
		if (str[i] == c)
			return (i);

	return (-1);
}
