#include "libft_string.h"
#include <stdlib.h>

void									ft_strfree(t_char* *a_str)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (a_str == NULL || *a_str == NULL)
			return ;
	#endif

	free(*a_str);
	*a_str = NULL;
}
