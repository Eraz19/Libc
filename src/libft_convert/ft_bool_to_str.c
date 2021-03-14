#include "libft_convert.h"
#include "libft_string.h"
#include <stdlib.h>

t_char*									ft_bool_to_str(t_bool value, e_case_style style)
{
	t_char*								result;

	if (value == TRUE)
	{
		if (style == LOWERCASE || style == CAMELCASE || style == SNAKECASE)
			result = ft_strdup((t_char*)("true"));
		else if (style == UPPERCASE)
			result = ft_strdup((t_char*)("TRUE"));
		else if (style == PASCALCASE)
			result = ft_strdup((t_char*)("True"));
		else 
			return (NULL);
	}
	else
	{
		if (style == LOWERCASE || style == CAMELCASE || style == SNAKECASE)
			result = ft_strdup((t_char*)("false"));
		else if (style == UPPERCASE)
			result = ft_strdup((t_char*)("FALSE"));
		else if (style == PASCALCASE)
			result = ft_strdup((t_char*)("False"));
		else 
			return (NULL);
	}

	return (result);
}
