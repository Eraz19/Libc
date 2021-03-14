#include "libft_memory.h"
#include <stdlib.h>

void*									ft_memdup(void const* ptr, t_size n)
{
	t_u8*								u8_ptr;
	t_u8*								new_ptr;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (ptr == NULL)
			return (NULL);
	#endif

	if (n == 0)
		return (NULL);

	u8_ptr = (t_u8*)ptr;

	if ((new_ptr = (t_u8*)malloc(sizeof(t_u8) * n)) == NULL)
		return (NULL);

	for (t_size i = 0; i < n; ++i)
		new_ptr[i] = u8_ptr[i];

	return ((void*)new_ptr);
}
