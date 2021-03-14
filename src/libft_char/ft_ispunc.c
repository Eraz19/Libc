#include "libft_char.h"

t_bool									ft_ispunct(t_char c)
{
	if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@') ||
		(c >= '[' && c <= '`') || (c >= '{' && c <= '~'))
		return (TRUE);

	return (FALSE);
}
