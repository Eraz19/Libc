#include "libft_memory.h"

void*									ft_memcpy(void* dest, void const* src, t_size n)
{
	t_u8*								u8_src;
	t_u8*								u8_dest;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (src == NULL || dest == NULL)
			return (NULL);
		if (src == dest)
			return (dest);
	#endif

	if (n == 0)
		return (dest);

	u8_src = (t_u8*)src;
	u8_dest = (t_u8*)dest;

	for (t_size i = 0; i < n; ++i)
		u8_dest[i] = u8_src[i];

	return (dest);
}
