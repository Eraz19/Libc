#include "libft_string.h"
#include <stdio.h>

t_size									ft_strlcpy(t_char* dest, t_char const* src, t_size n)
{
	t_size								src_len;
	t_size 								i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (src == NULL || dest == NULL)
			return (0);
	#endif

	src_len = ft_strlen(src);
	i = 0;

	if (n == 0)
		return (src_len);

	while (i < (n - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}

	dest[i] = '\0';

	return (src_len);
}
