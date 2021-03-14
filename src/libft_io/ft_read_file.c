#include "libft_io.h"
#include "libft_string.h"
#include <errno.h>

t_s32									ft_read_file(t_uint const fd, t_char* *add_file_content)
{
	t_s32 								errno;
	t_char								buffer[READ_FILE_BUFFER_SIZE + 1] = {0};
	t_uint								read_result;
	t_bool 								first_buffer_in_content;

	#if (NULL_POINTER_EXCEPTION_CHECK)
		if (add_file_content == NULL)
			return (EINVAL);
	#endif

	read_result = 1;
	first_buffer_in_content = FALSE;
	errno = 0;

	while (read_result != 0)
	{
		read_result = read(fd, buffer, READ_FILE_BUFFER_SIZE);

		if (read_result > 0)
		{
			if (first_buffer_in_content == FALSE)
			{
				*add_file_content = ft_strdup(buffer);
				first_buffer_in_content = TRUE;
			}
			else
				*add_file_content = ft_strappend(add_file_content, buffer);
		}
		else if (read_result < 0)
			return (errno);
	}

	return (errno);
}
