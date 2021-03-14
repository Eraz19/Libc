#include "libft_list.h"

s_list* 								ft_lstmap(s_list* lst, s_list* (*f)(s_list* elem))
{
	s_list*								new_list;
	s_list*								new_list_link;

	#if (NULL_POINTER_EXCEPTION_CHECK == 1)
		if (lst == NULL || f == NULL)
			return (NULL);
	#endif

	new_list = NULL;

	while (lst != NULL)
	{
		if ((new_list_link = f(lst)) == NULL)
		{
			ft_lstdel(&new_list, &ft_del_content_data);
			return (NULL);
		}

		if (new_list == NULL)
			new_list = new_list_link;
		else 
			ft_lstappend(new_list, new_list_link);

		lst = lst->next;
	}

	return (new_list);
}
