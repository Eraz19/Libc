#include "libft_math.h"

t_sint 									ft_pow(t_sint nbr, t_sint p)
{
	t_sint								result;

	result = 1;

	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);

	while (p != 0)
	{
		result *= nbr;
		--p;
	}

	return (result);
}
