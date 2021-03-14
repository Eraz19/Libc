#include "libft_convert.h"
#include "libft_string.h"

t_char*									ft_s32_to_str(t_s32 nbr)
{
	t_char								temp_buffer[SIZE_S32_BUFFER];
	t_size								i;
	t_sint								nbr_sign;

	i = 0;
	nbr_sign = POSITIVE;

	if (nbr == 0)
		temp_buffer[i++] = '0';
	else if (nbr < 0)
	{
		nbr *= -1;
		nbr_sign = NEGATIVE;
	}

	while (nbr > 0)
	{
		temp_buffer[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}

	if (nbr_sign == NEGATIVE)
		temp_buffer[i++] = '-';

	temp_buffer[i] = '\0';

	return (ft_strrev(temp_buffer));
}
