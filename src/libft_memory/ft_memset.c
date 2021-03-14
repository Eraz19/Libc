#include "libft_memory.h"

void*									ft_memset(void* mem, t_u8 c, t_size n)
{
	t_u8*								u8_mem;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (mem == NULL)
			return (NULL);
	#endif

	if (n == 0)
		return (mem);

	u8_mem = (t_u8*)mem;

	for (t_size i = 0; i < n; ++i)
		u8_mem[i] = c;

	return (mem);
}
