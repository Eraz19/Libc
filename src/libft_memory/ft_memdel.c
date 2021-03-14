#include "libft_memory.h"
#include <stdlib.h>

void									ft_memdel(void* *a_p, t_size n)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (a_p == NULL || *a_p == NULL)
			return ;
	#endif

	if (n == 0)
		return ;

	ft_memclr(*a_p, n);
	free(*a_p);
	*a_p = NULL;
}
