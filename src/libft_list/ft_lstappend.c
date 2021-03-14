#include "libft_list.h"

void 									ft_lstappend(s_list* lst, s_list* new_link)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (lst == NULL || new_link == NULL)
			return ;
	#endif

	while (lst->next != NULL)
		lst = lst->next;

	lst->next = new_link;
}
