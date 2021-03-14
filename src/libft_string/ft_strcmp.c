#include "libft_string.h"

t_sint									ft_strcmp(t_char const* str1, t_char const* str2)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str1 == str2)
			return (0);
		if (str1 == NULL)
			return (0 - str2[0]);
		else if (str2 == NULL)
			return (str1[0] - 0);
	#endif

	for (t_size i = 0; str1[i] != '\0' && str2[i] != '\0'; ++i)
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);

	return (0);
}
