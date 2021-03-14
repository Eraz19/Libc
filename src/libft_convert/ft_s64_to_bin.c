#include "libft_convert.h"
#include <stdlib.h>

t_char* 								ft_s64_to_bin(t_s64 value)
{
	t_u64 								bitwise_result;
	t_u64 								mask;
	t_char*								result;
	t_size 								i;

	mask = BIN_64BITS_MASK;

	if ((result = (t_char*)malloc(sizeof(t_char) * (BUFFER_64BITS + 1))) == NULL)
		return NULL;

	for (i = 0; i < BUFFER_64BITS; ++i)
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
