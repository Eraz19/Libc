#include "libft_char.h"

t_bool									ft_islower(t_char_utf8 c)
{
	if (c >= 'a' && c <= 'z')
		return (TRUE);

	return (FALSE);
}
