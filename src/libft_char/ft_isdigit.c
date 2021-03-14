#include "libft_char.h"

t_bool									ft_isdigit(t_char_utf8 c)
{
	if (c >= '0' && c <= '9')
		return (TRUE);

	return (FALSE);
}
