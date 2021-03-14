#include "libft_convert.h"
#include "libft_string.h"

t_char*									ft_u64_to_str(t_u64 nbr)
{
	t_char								temp_buffer[SIZE_S64_BUFFER];
	t_size								i;

	i = 0;

	if (nbr == 0)
		temp_buffer[i++] = '0';

	while (nbr > 0)
	{
		temp_buffer[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}

	temp_buffer[i] = '\0';

	return (ft_strrev(temp_buffer));
}
