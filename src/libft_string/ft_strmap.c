#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strmap(t_char const* str, t_char (*f)(t_char))
{
	t_size								str_len;
	t_size								i;
	t_char*								new_str;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || f == NULL)
			return (NULL);
	#endif

	str_len = ft_strlen(str);

	if ((new_str = (t_char*)malloc(sizeof(t_char) * (str_len + 1))) == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		new_str[i] = f(str[i]);
		++i;
	}

	new_str[i] = '\0';

	return (new_str);
}
