#include "libft_io.h"

void 									ft_putchar_fd(t_char c, t_uint fd)
{
	write(fd, &c, 1);
}
