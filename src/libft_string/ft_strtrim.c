#include "libft_string.h"
#include <stdlib.h>
#include <stdio.h>

t_char*									ft_strtrim(t_char const* str, t_char const* charset)
{
	t_char*								temp_new_str;
	t_char*								final_new_str;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || charset == NULL)
			return (NULL);
	#endif

	temp_new_str = ft_strrtrim(str, charset);
	if (temp_new_str != NULL)
	{
		final_new_str = ft_strltrim(temp_new_str, charset);
		free(temp_new_str);
		return (final_new_str);
	}

	return ("");
}
