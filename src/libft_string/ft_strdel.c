#include "libft_string.h"
#include <stdlib.h>

void									ft_strdel(t_char* *a_str)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (a_str == NULL || *a_str == NULL)
			return ;
	#endif

	ft_strclr(*a_str);
	free(*a_str);
	*a_str = NULL;
}
