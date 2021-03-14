#include "libft_list.h"

void 									ft_lstiter(s_list* lst, void (*f)(s_list* elem))
{
	s_list*								link;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (lst == NULL || f == NULL)
			return ;
	#endif

	link = lst;

	while (link != NULL)
	{
		f(link);
		link = link->next;
	}
}
