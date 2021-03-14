#include "libft_io.h"
#include "libft_string.h"

void 									ft_putstr(t_char const* str)
{
	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return ;
	#endif

	write(STDOUT_FILENO, str, ft_strlen(str));
}
