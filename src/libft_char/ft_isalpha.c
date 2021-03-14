#include "libft_char.h"

t_bool									ft_isalpha(t_char_utf8 c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (TRUE);

	return (FALSE);
}
