#include "libft_list.h"

void 									ft_lstadd(s_list* *a_lst, s_list* new_link)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (a_lst == NULL || *a_lst == NULL || new_link == NULL)
			return ;
	#endif

	new_link->next = *a_lst;
	a_lst = &new_link;
}
