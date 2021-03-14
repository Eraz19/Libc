#include "libft_string.h"

t_bool									ft_strequ(t_char const* str1, t_char const* str2)
{

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str1 == NULL || str2 == NULL)
			return (FALSE);
		if (str1 == str2)
			return(TRUE);
	#endif

	if (ft_strlen(str1) == 0 && ft_strlen(str2) != 0)
		return (FALSE);
	else if (ft_strlen(str1) != 0 && ft_strlen(str2) == 0)
		return (FALSE);

	for (t_size i = 0; str1[i] != '\0' && str2[i] != '\0'; ++i)
		if (str1[i] != str2[i])
			return (FALSE);

	return (TRUE);
}
