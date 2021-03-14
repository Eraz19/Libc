#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strmerge(t_char* *add_str1, t_char* *add_str2)
{
	t_char*								new_str;
	t_size 								str1_len;
	t_size 								str2_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (add_str1 == NULL || *add_str1 == NULL ||
			add_str2 == NULL || *add_str2 == NULL)
			return (NULL);
	#endif

	str1_len = ft_strlen(*add_str1);
	str2_len = ft_strlen(*add_str2);

	if (str1_len == 0 && str2_len == 0)
		return ("");

	if ((new_str = (t_char*)malloc(sizeof(t_char)*(str1_len + str2_len + 1))) == NULL)
		return (NULL);

	ft_strcpy(new_str, *add_str1);
	free(*add_str1);
	*add_str1 = NULL;
	ft_strcpy(new_str + str1_len, *add_str2);
	free(*add_str2);
	*add_str2 = NULL;

	return (new_str);
}
