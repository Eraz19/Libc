#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strappend(t_char* *add_str, t_char const* to_append)
{
	t_char*								new_str;
	t_size 								str_len;
	t_size 								to_append_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (add_str == NULL || *add_str == NULL || to_append == NULL)
			return (NULL);
	#endif

	str_len = ft_strlen(*add_str);
	to_append_len = ft_strlen(to_append);

	if ((new_str = (t_char*)malloc(sizeof(t_char)*(str_len + to_append_len + 1))) == NULL)
		return (NULL);

	ft_strcpy(new_str, *add_str);
	free(*add_str);
	*add_str = NULL;
	ft_strcpy(new_str + str_len, to_append);

	return (new_str);
}
