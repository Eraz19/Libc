#include "libft_string.h"

t_char*									ft_strncpy(t_char* dest, t_char const* src, t_size n)
{
	t_size								i;
	t_size 								src_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (src == NULL || dest == NULL)
			return (NULL);
		if (src == dest)
			return (dest);
	#endif

	if (n == 0)
		return (dest);

	i = 0;
	src_len = ft_strlen(src);

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}

	if (i == src_len)
		dest[i] = '\0';

	return (dest);
}
