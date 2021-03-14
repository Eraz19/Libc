#include "libft_char.h"

t_bool									ft_isprint(t_char_utf8 c)
{
	if (c >= ' ' && c <= '~')
		return (TRUE);

	return (FALSE);
}
