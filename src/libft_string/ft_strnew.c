#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_strnew(t_size size)
{
	t_char*								new_str;

	if (size == 0)
		return (NULL);

	if ((new_str = (t_char*)malloc(sizeof(t_char) * (size + 1))) == NULL)
		return (NULL);

	for (t_size i = 0; i <= size; ++i)
		new_str[i] = '\0';

	return (new_str);
}
