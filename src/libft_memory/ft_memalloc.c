#include "libft_memory.h"
#include <stdlib.h>

void*									ft_memalloc(t_size n)
{
	void*								new_mem;

	if (n == 0)
		return (NULL);

	if ((new_mem = (void*)malloc(sizeof(t_u8) * n)) == NULL)
		return (NULL);

	ft_memclr(new_mem, n);

	return (new_mem);
}
