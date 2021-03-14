#include "libft_io.h"

void 									ft_putendl(t_char const* str)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return ;
	#endif

	ft_putstr(str);
	ft_putchar('\n');
}
