#include "libft_char.h"

t_bool									ft_isalnum(t_char_utf8 c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (TRUE);

	return (FALSE);
}
