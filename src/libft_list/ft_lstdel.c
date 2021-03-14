#include "libft_list.h"
#include <stdlib.h>

void 									ft_lstdel(s_list* *a_lst, void (*del)(void* *, t_size))
{
	s_list*								link;
	s_list*								next_link;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (a_lst == NULL || *a_lst == NULL || del == NULL)
			return ;
	#endif

	link = *a_lst;

	while (link != NULL)
	{
		next_link = link->next;
		ft_lstdelone(&link, del);
		link = next_link;
	}

	*a_lst = NULL;
}
