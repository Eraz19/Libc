#include "libft_string.h"
#include "libft_char.h"

t_char*									ft_strtolower(t_char const* str)
{
	t_char*								result;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (NULL);
	#endif

	result = ft_strdup(str);

	for (t_size i = 0; result[i] != '\0'; ++i)
		result[i] = ft_tolower(result[i]);

	return (result);
}
