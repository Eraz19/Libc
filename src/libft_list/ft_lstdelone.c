#include "libft_list.h"
#include <stdlib.h>

void 									ft_lstdelone(s_list* *a_link, void (*del)(void* *, t_size))
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (a_link == NULL || *a_link == NULL || del == NULL)
			return ;
	#endif

	del(&((*a_link)->item), (*a_link)->item_size);
	(*a_link)->item_size = 0;
	(*a_link)->next = NULL;
	free(*a_link);
	*a_link = NULL;
}
