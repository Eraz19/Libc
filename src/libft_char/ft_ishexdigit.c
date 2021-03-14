#include "libft_char.h"

t_bool									ft_ishexdigit(t_char c)
{
	if ((c >= '0' && c <= '9') ||
		(c >= 'A' && c <= 'F') ||
		(c >= 'a' && c <= 'f'))
		return (TRUE);

	return (FALSE);
}
