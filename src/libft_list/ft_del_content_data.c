#include "libft_list.h"
#include <stdlib.h>

void 									ft_del_content_data(void* *a_link_content, t_size item_size)
{	
	t_u8*								link_content_u8;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (a_link_content == NULL || *a_link_content == NULL)
			return ;
	#endif

	link_content_u8 = (t_u8*)(*a_link_content);

	for (t_size i = 0; i < item_size; ++i)
		link_content_u8[i] = 0;

	free(*a_link_content);
	*a_link_content = NULL;
}
