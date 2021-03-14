#include "libft_io.h"

void 									ft_putendl_fd(t_char const *str, t_uint fd)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return ;
	#endif

	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
