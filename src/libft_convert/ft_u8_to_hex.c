#include "libft_convert.h"
#include "libft_string.h"

t_char*									ft_u8_to_hex(t_u8 nbr)
{
	t_u8								result;
	t_u8 								mask;
	t_char								str_hexa[SIZE_8BITS_HEXA_BUFFER];
	t_size 								i;

	mask = HEXA_CONVERTION_8BITS_MASK;
	i = 0;

	while (nbr)
	{
		result = nbr & mask;
		if (result < 10)
			str_hexa[i] = result + '0';
		else
			str_hexa[i] = (result - 10) + 'A';

		nbr = nbr >> 4;
		++i;
	}

	str_hexa[i] = 'x';
	str_hexa[i + 1] = '0';

	return (ft_strrev(str_hexa));
}
