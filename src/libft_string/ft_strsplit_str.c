#include "libft_string.h"
#include <stdlib.h>

static void								free_str_arr(t_char** *add_str_arr)
{
	for (t_size i = 0; (*add_str_arr)[i] != NULL; ++i)
		(*add_str_arr)[i] = NULL;

	free(*add_str_arr);
	*add_str_arr = NULL;
}

static t_size							cpy_str_arr(t_char* *src, t_char* *dest)
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

t_char** 								ft_strsplit_str(t_char const* str, t_char const* sub_str)
{
	t_char**							str_arr;
	t_char*								start_sub_str_add;
	t_size								str_num;
	t_size								i;
	t_size								sub_str_len;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (str == NULL || sub_str == NULL)
			return (NULL);
	#endif

	if (str == sub_str || ft_strequ(str, sub_str) == TRUE)
		return (NULL);

	i = 0;
	str_num = 0;
	str_arr = NULL;
	sub_str_len = ft_strlen(sub_str);

	while (str[i] != '\0')
	{
		start_sub_str_add = ft_strstr(str + i, sub_str);

		if ((start_sub_str_add - (str + i)) == 0)
			return (str_arr);
		else if (start_sub_str_add == NULL)
		{
			if ((str_arr = add_split_str(str_arr, str + i, ft_strlen(str + i), ++str_num)) == NULL)
				return (NULL);
			return (str_arr);
		}
		else
		{
			if ((str_arr = add_split_str(str_arr, str + i, start_sub_str_add - (str + i), ++str_num)) == NULL)
				return (NULL);
			i += (start_sub_str_add - (str + i)) + sub_str_len;
		}
	}

	return (str_arr);
}
