#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strrtrim(t_char const* str, t_char const* charset)
{
	t_char*								new_str;
	t_bool								start_cpy;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || charset == NULL)
			return (NULL);
	#endif

	start_cpy = FALSE;

	for (t_sint i = (ft_strlen(str) - 1); i >= 0; --i)
	{
		if (start_cpy == FALSE && ft_strchr(charset, str[i]) == NULL)
		{
			start_cpy = TRUE;
			if ((new_str = (t_char*)malloc(sizeof(t_char) * (i + 2))) == NULL)
				return (NULL);
			new_str[i + 1] = '\0';
		}

		if (start_cpy == TRUE)
			new_str[i] = str[i];
	}

	if (start_cpy == TRUE)
	{
		new_str[0] = str[0];
		return (new_str);
	}

	return (NULL);
}
