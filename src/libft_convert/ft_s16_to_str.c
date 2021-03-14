#include "libft_convert.h"
#include "libft_string.h"

t_char*									ft_s16_to_str(t_s16 nbr)
{
	t_char								temp_buffer[SIZE_S16_BUFFER];
	t_size								i;
	t_sint								nbr_sign;
	t_u32 								temp_nbr;

	i = 0;
	nbr_sign = POSITIVE;
	temp_nbr = nbr;

	if (nbr == 0)
		temp_buffer[i++] = '0';
	else if (nbr < 0)
	{
		temp_nbr = nbr * -1;
		nbr_sign = NEGATIVE;
	}

	while (temp_nbr > 0)
	{
		temp_buffer[i++] = (temp_nbr % 10) + '0';
		temp_nbr /= 10;
	}

	if (nbr_sign == NEGATIVE)
		temp_buffer[i++] = '-';

	temp_buffer[i] = '\0';

	return (ft_strrev(temp_buffer));
}
