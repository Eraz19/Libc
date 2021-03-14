#include "libft_convert.h"
#include "libft_char.h"

static t_u8 							get_char_hex_value(t_char c)
{
	t_u8 								char_hex_value;

	if (ft_isalpha(c) == TRUE && ft_islower(c) == TRUE)
		char_hex_value = (c - 'a') + 10;
	else if (ft_isalpha(c) == TRUE && ft_isupper(c) == TRUE)
		char_hex_value = (c - 'A') + 10;
	else
		char_hex_value = c - '0';

	return (char_hex_value);
}

t_u8									ft_hex_to_u8(t_char const* str)
{
	t_u8 								result;
	t_size 								i;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (0);
	#endif

	i = 0;

	if (str[0] == '0' && (str[1] == 'x' || str[1] =='X'))
		i = 2;

	for (; str[i] != '\0'; ++i)
	{
		if (ft_ishexdigit(str[i]) == TRUE)
		{
			result <<= 4;
			result = result | get_char_hex_value(str[i]);
		}
		else 
			return (0);
	}

	return (result);
}
