#include "libft_string.h"

void									ft_striteri(t_char* str, void (*f)(t_uint, t_char*))
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || f == NULL)
			return ;
	#endif

	for (t_size i = 0; str[i] != '\0'; ++i)
		f(i, str + i);
}
