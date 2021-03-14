#include "libft_string.h"

t_char*									ft_strcat(t_char* dest, t_char const* src)
{
	t_size								dest_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (src == NULL || dest == NULL)
			return (NULL);
	#endif

	dest_len = ft_strlen(dest);

	for (t_size	i = 0; src[i] != '\0'; ++i)
	{
		dest[dest_len] = src[i];
		++dest_len;
	}

	dest[dest_len] = '\0';

	return (dest);
}
