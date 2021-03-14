#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strprepend(t_char const* to_prepend, t_char* *add_str)
{
	t_char*								new_str;
	t_size 								str_len;
	t_size 								to_prepend_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (add_str == NULL || *add_str == NULL || to_prepend == NULL)
			return (NULL);
	#endif

	str_len = ft_strlen(*add_str);
	to_prepend_len = ft_strlen(to_prepend);

	if ((new_str = (t_char*)malloc(sizeof(t_char)*(str_len + to_prepend_len + 1))) == NULL)
		return (NULL);

	ft_strcpy(new_str, to_prepend);
	ft_strcpy(new_str + to_prepend_len, *add_str);
	free(*add_str);
	*add_str = NULL;

	return (new_str);
}
