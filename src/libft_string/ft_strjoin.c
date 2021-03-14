#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strjoin(t_char const* str1, t_char const* str2)
{
	t_char*								new_str;
	t_size 								str1_len;
	t_size 								str2_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str1 == NULL || str2 == NULL)
			return (NULL);
	#endif

	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);

	if (str1_len == 0 && str2_len == 0)
		return ("");

	if ((new_str = (t_char*)malloc(sizeof(t_char)*(str1_len + str2_len + 1))) == NULL)
		return (NULL);

	ft_strcpy(new_str, str1);
	ft_strcpy(new_str + str1_len, str2);

	return (new_str);
}
