#include "libft_memory.h"

void*									ft_memchr(void const* mem, t_u8 c, t_size n)
{
	t_u8*								u8_mem;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (mem == NULL)
			return (NULL);
	#endif

	if (n == 0)
		return (NULL);

	u8_mem = (t_u8*)mem;

	for (t_size i = 0; i < n; ++i)
		if (u8_mem[i] == c)
			return (u8_mem + i);

	return (NULL);
}
