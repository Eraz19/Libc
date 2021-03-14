#include "libft_memory.h"
#include <stdlib.h>

void									ft_memfree(void* *a_p)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (a_p == NULL || *a_p == NULL)
			return ;
	#endif

	free(*a_p);
	*a_p = NULL;
}
