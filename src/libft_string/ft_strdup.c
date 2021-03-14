#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strdup(t_char const* str)
{
	t_char*								new_str;
	t_size								i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (NULL);
	#endif

	if ((new_str = (t_char*)malloc(sizeof(t_char) * (ft_strlen(str) + 1))) == NULL)
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
