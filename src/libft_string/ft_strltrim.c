#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strltrim(t_char const* str, t_char const* charset)
{
	t_char*								new_str;
	t_size								str_len;
	t_bool								start_cpy;
	t_size								new_str_i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || charset == NULL)
			return (NULL);
	#endif

	str_len = ft_strlen(str);
	start_cpy = FALSE;
	new_str_i = 0;

	for (t_size i = 0; str[i] != '\0'; ++i)
	{
		if (start_cpy == FALSE && ft_strchr(charset, str[i]) == NULL)
		{
			start_cpy = TRUE;
			if (i == str_len || (new_str = (t_char*)malloc(sizeof(t_char) * (str_len - i + 1))) == NULL)
				return (NULL);
		}

		if (start_cpy == TRUE)
		{
			new_str[new_str_i] = str[i];
			++new_str_i;
		}
	}

	if (new_str_i != 0)
	{
		new_str[new_str_i] = '\0';
		return (new_str);	
	} 

	return (NULL);
}
