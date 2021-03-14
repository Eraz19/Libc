#include "libft_string.h"

t_char*									ft_strchr(t_char const* str, t_char c)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (NULL);
	#endif

	if (c == '\0')
		return ("");

	for (t_size i = 0; str[i] != '\0'; ++i)
		if (str[i] == c)
			return ((t_char*)(str + i));

	return (NULL);
}
