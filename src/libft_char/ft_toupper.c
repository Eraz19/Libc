#include "libft_char.h"

t_char									ft_toupper(t_char c)
{
	if (ft_islower(c) == TRUE)
		return (c -= ('A' - 'a'));

	return (c);
}
