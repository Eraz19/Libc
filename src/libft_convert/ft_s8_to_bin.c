#include "libft_convert.h"
#include <stdlib.h>

t_char* 								ft_s8_to_bin(t_s8 value)
{
	t_u8 								bitwise_result;
	t_u8 								mask;
	t_char*								result;
	t_size 								i;

	mask = BIN_8BITS_MASK;

	if ((result = (t_char*)malloc(sizeof(t_char) * (BUFFER_8BITS + 1))) == NULL)
		return NULL;

	for (i = 0; i < BUFFER_8BITS; ++i)
	{
		bitwise_result = value & mask;
		if (bitwise_result)
			result[i] = '1';
		else 
			result[i] = '0';

		mask >>= 1;
	}

	result[i] = '\0';

	return (result);
}
