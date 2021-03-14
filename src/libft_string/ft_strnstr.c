#include "libft_string.h"

t_char*									ft_strnstr(t_char const* str, t_char const* sub_str, t_size n)
{
	t_size								sub_str_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || sub_str == NULL)
			return (NULL);
		if (str == sub_str)
			return ((t_char*)str);
	#endif

	if (n == 0)
		return (NULL);

	sub_str_len = ft_strlen(sub_str);

	if (sub_str_len == 0)
		return ((t_char*)str);

	for (t_size i = 0; i < n && str[i] != '\0'; ++i)
		if (str[i] == sub_str[0] && ft_strncmp(str + i, sub_str,sub_str_len) == 0)
			return ((t_char*)(str + i));

	return (NULL);
}
