#include "libft_string.h"

t_char*									ft_strcpy(t_char* dest, t_char const* src)
{
	t_size								i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (src == NULL || dest == NULL)
			return (NULL);
		if (src == dest)
			return (NULL);
	#endif

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}

	dest[i] = '\0';

	return (dest);
}
