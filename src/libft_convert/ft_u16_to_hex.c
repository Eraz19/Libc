#include "libft_convert.h"
#include "libft_string.h"

t_char*									ft_u16_to_hex(t_u16 nbr)
{
	t_u16								result;
	t_u16								mask;
	t_char								str_hexa[SIZE_16BITS_HEXA_BUFFER];
	t_size 								i;

	mask = HEXA_CONVERTION_16BITS_MASK;
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
