#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strsub(t_char const* str, t_uint start, t_size len)
{
	t_char*								sub_str;
	t_size								str_len;
	t_size								sub_i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (NULL);
	#endif

	str_len = ft_strlen(str);

	if (start + len > str_len && (sub_str = (t_char*)malloc(sizeof(t_char) * ((str_len - start) + 1))) == NULL)
		return (NULL);
	else if (start >= str_len || (sub_str = (t_char*)malloc(sizeof(t_char) * (len + 1))) == NULL)
		return (NULL);

	sub_i = 0;

	for (t_size str_i = start; sub_i < len && str[str_i] != '\0'; ++str_i)
	{
		sub_str[sub_i] = str[str_i];
		++sub_i;
	}

	sub_str[sub_i] = '\0';

	return (sub_str);
}
