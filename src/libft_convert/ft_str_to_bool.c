#include "libft_convert.h"
#include "libft_string.h"
#include <stdlib.h>

t_bool									ft_str_to_bool(t_char const* str)
{
	t_char*								lower_str;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (NULL);
	#endif

	lower_str = ft_strtolower(str);

	if (ft_strequ(lower_str, (t_char*)("true")) == TRUE)
	{
		free(lower_str);
		lower_str = NULL;
		return (TRUE);
	}
	else
	{
		free(lower_str);
		lower_str = NULL;
		return (FALSE);
	}
}
