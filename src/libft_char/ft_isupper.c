#include "libft_char.h"

t_bool									ft_isupper(t_char_utf8 c)
{
	if (c >= 'A' && c <= 'Z')
		return (TRUE);

	return (FALSE);
}
