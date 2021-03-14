#include "libft_char.h"

t_char									ft_tolower(t_char c)
{
	if (ft_isupper(c) == TRUE)
		return (c -= ('A' - 'a'));

	return (c);
}
