#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strrev(t_char const* str)
{
	t_size								str_len;
	t_size 								j;
	t_char*								new_str;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (NULL);
	#endif

	str_len = ft_strlen(str);

	if ((new_str = (t_char*)malloc(sizeof(t_char) * (str_len + 1))) == NULL)
		return (NULL);

	j = str_len - 1;

	for (t_size i = 0; i < str_len; ++i)
	{
		new_str[i] = str[j];
		--j;
	}

	new_str[str_len] = '\0';

	return (new_str);
}
