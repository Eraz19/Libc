#include "libft_char.h"

t_bool									ft_isascii(t_char_utf8 c)
{
	if (c >= 0 && c <= 127)
		return (TRUE);

	return (FALSE);
}
