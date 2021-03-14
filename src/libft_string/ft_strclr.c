#include "libft_string.h"

void									ft_strclr(t_char* str)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return ;
	#endif

	for (t_size i = 0; str[i] != '\0'; ++i)
		str[i] = '\0';
}
