#include "libft_string.h"
#include <stdlib.h>

static void								free_str_arr(t_char** *add_str_arr)
{
	for (t_size i = 0; (*add_str_arr)[i] != NULL; ++i)
		(*add_str_arr)[i] = NULL;

	free(*add_str_arr);
	*add_str_arr = NULL;
}

static t_size							cpy_str_arr(t_char** src, t_char* *dest)
{
	t_size								i;

	for (i = 0; src[i] != NULL; ++i)
			dest[i] = src[i];

	return (i);
}

static t_char**							add_split_str(t_char** str_arr, t_char const* str, t_size j, t_size str_num)
{
	t_char**							new_str_arr;
	t_size								i;

	if ((new_str_arr = (t_char**)malloc(sizeof(t_char*) * (str_num + 1))) == NULL)
		return (NULL);

	i = 0;

	if (str_arr != NULL)
	{
		i = cpy_str_arr(str_arr, new_str_arr);
		free_str_arr(&str_arr);
	}

	new_str_arr[i] = ft_strsub(str, 0, j);
	new_str_arr[i + 1] = NULL;

	return (new_str_arr);
}

t_char** 								ft_strcsplit(t_char const* str, t_char c)
{
	t_char**							str_arr;
	t_size								str_num;
	t_size								j;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL)
			return (NULL);
	#endif
	
	if (c == '\0')
		return (NULL);

	str_num = 0;
	str_arr = NULL;

	for (t_size i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != c)
		{
			for (j = 1; str[i + j] != c && str[i + j] != '\0'; ++j);
			if ((str_arr = add_split_str(str_arr, str + i, j, ++str_num)) == NULL)
				return (NULL);

			i += (j - 1);
		}
	}

	return (str_arr);
}
