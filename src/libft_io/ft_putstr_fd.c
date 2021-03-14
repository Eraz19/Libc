#include "libft_io.h"
#include "libft_string.h"

void 									ft_putstr_fd(t_char const *str, t_uint fd)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return ;
	#endif

	write(fd, str, ft_strlen(str));
}
