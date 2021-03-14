#include "libft_char.h"

t_bool									ft_isspace(t_char_utf8 c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (TRUE);

	return (FALSE);
}
