#include "libft_io.h"
#include "libft_string.h"

void									ft_putnbr_fd(t_sint nbr, t_uint fd)
{
	t_char								temp_buffer[SIZE_T_SINT_BUFFER];
	t_size								i;
	t_sint								nbr_sign;

	i = 0;
	nbr_sign = POSITIVE;

	if (nbr == 0)
		ft_putchar('0');
	else if (nbr < 0)
	{
		nbr_sign = NEGATIVE;
		nbr *= -1;
	}

	while (nbr > 0)
	{
		temp_buffer[i++] = (nbr % 10) + '0' ;
		nbr /= 10;
	}

	if (nbr_sign == NEGATIVE)
		temp_buffer[i++] = '-';

	temp_buffer[i] = '\0';
	ft_putstr_fd(ft_strrev(temp_buffer), fd);
}
