#include "libft_list.h"
#include "libft_memory.h"
#include <stdlib.h>

s_list* 								ft_lstnew(void const* item, t_size item_size)
{
	s_list* 							new_link;

	if ((new_link = (s_list*)malloc(sizeof(s_list))) == NULL)
		return (NULL);

	if (item == NULL)
	{
		new_link->item = NULL;
		new_link->item_size = 0;
	}
	else
	{
		if ((new_link->item = malloc(item_size)) == NULL)
		{
			ft_lstdelone(&new_link, &ft_del_content_data);
			return (NULL);
		}

		ft_memcpy(new_link->item, item, item_size);
		new_link->item_size = item_size;
	}

	new_link->next = NULL;

	return (new_link);
}
