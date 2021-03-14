#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strndup(t_char const* str, t_size n)
{
	t_char*								new_str;
	t_size 								str_len;
	t_size								i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (NULL);
	#endif

	if (n == 0)
		return (NULL);

	str_len = ft_strlen(str);

	if (n < str_len)
	{
		if ((new_str = (t_char*)malloc(sizeof(t_char) * (n + 1))) == NULL)
			return (NULL);
	}
	else
		if ((new_str = (t_char*)malloc(sizeof(t_char) * (str_len + 1))) == NULL)
			return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		++i;
	}

	new_str[i] = '\0';

	return (new_str);
}
