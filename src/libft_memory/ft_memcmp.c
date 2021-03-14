#include "libft_memory.h"

t_sint									ft_memcmp(void const* mem1, void const* mem2, t_size n)
{
	t_u8*								u8_mem1;
	t_u8*								u8_mem2;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (mem1 == mem2)
			return (0);
	#endif

	if (n == 0)
		return (0);

	u8_mem1 = (t_u8*)mem1;
	u8_mem2 = (t_u8*)mem2;

	if (NULL_POINTER_EXCEPTION_CHECK == 1)
	{
		if (mem1 == NULL)
			return (0 - u8_mem2[0]);
		else if (mem2 == NULL)
			return (u8_mem1[0] - 0);
	}

	for (t_size i = 0; i < n; ++i)
		if (u8_mem1[i] != u8_mem2[i])
			return (u8_mem1[i] - u8_mem2[i]);

	return (0);
}
