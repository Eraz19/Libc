#include "libft_io.h"

void 									ft_putchar(t_char c)
{
	write(STDOUT_FILENO, &c, 1);
}
