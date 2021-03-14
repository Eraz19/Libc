#include "libft_memory.h"

void*									ft_memccpy(void* dest, void const* src, t_u8 c, t_size n)
{
	t_u8*								u8_src;
	t_u8*								u8_dest;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (src == NULL || dest == NULL)
			return (NULL);
	#endif

	u8_src = (t_u8*)src;
	u8_dest = (t_u8*)dest;

	for (t_size i = 0; i < n ; ++i)
	{
		u8_dest[i] = u8_src[i];

		if (u8_src[i] == c)
			return (u8_dest + i + 1);
	}

	return (NULL);
}
