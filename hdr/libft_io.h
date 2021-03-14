#ifndef __LIBFT_IO_H__
#define __LIBFT_IO_H__

/*
// Include necessary header
------------------------------------------------------*/

// Includes the following MACROS
//	- STDOUT_FILENO
#include <unistd.h>

// Includes the following types
//	- t_sint
//	- t_uint
//	- t_size
//	- t_bool
//	- t_char
// Includes the following Macros
//	NULL_POINTER_EXCEPTION_CHECK
//  NULL
//	TRUE
//	FALSE
//  SIZE_T_SINT_BUFFER
//	SIZE_T_UINT_BUFFER
//	NEGATIVE
//	POSITIVE
#include "libft.h"

/*
// Macros to use in the libft_convert
------------------------------------------------------*/

#define READ_FILE_BUFFER_SIZE 			1024

/*
// Libft_io functions prototype
------------------------------------------------------*/

//*Description :
//		Print the character givin as argument to the standard output (stdout).
//*Parameters :
//		- c 							character to print
//Return :
//		void
void 									ft_putchar(t_char c); // TO TEST
#define c_putchar						ft_putchar

//*Description :
//		Print the character givin as argument to the givin file descriptor.
//*Parameters :
//		- c 							character to print
//		- fd 							file descriptor
//*Return :
//		void
void 									ft_putchar_fd(t_char c, t_uint fd); // TO TEST
#define c_putchar_fd					ft_putchar_fd

//*Description :
//		Print the string givin as argument to the standard output (stdout) and finish with a '\n' (line return).
//*Parameters :
//		- str 							string to print
//*Return :
//		void
void 									ft_putendl(t_char const* str); // TO TEST
#define c_putendl						ft_putendl

//*Description :
//		Print the string givin as argument to the givin file descriptor and finish with a '\n' (line return).
//*Parameters :
//		- str 							string to print
//		- fd 							file descriptor
//*Return :
//		void
void 									ft_putendl_fd(t_char const *str, t_uint fd); // TO TEST
#define c_putendl_fd					ft_putendl_fd

//*Description :
//		Print the integer givin as argument to the standard output (stdout).
//*Parameters :
//		- nbr 							integer to print
//*Return :
//		void
void									ft_putnbr(t_sint nbr); // TO TEST
#define c_putnbr						ft_putnbr

//*Description :
//		Print the integer givin as argument to the file descriptor.
//*Parameters :
//		- nbr 							integer to print
//		- fd 							file descriptor
//Return :
//		void
void 									ft_putnbr_fd(t_sint nbr, t_uint fd); // TO TEST
#define c_putnbr_fd						ft_putnbr_fd

//*Description :
//		Print the string givin as argument to the standard output (stdout).
//*Parameters :
//		- str 							string to print
//*Return :
//		void
void 									ft_putstr(t_char const* str); // TO TEST
#define c_putstr						ft_putstr

//*Description :
//		Print the string givin as argument to the givin file descriptor.
//*Parameters :
//		- str 							string to print
//		- fd 							file descriptor
//*Return :
//		void
void 									ft_putstr_fd(t_char const *str, t_uint fd); // TO TEST
#define c_putstr_fd						ft_putstr_fd

//*Description :
//		Read all the content of a file in one time.
//*Parameters :
//		- fd							file descriptor of the file to read (to get the file descriptor use open)
//		- add_file_content				address of pointer to string that going to receive the content of the file
//*Return :
//		t_char*							pointer to string or NULL (if malloc failed)
//*NULL_POINTER_EXCEPTION
//		If add_file_content is NULL return EINVAL (can be catch with perror)
t_s32									ft_read_file(t_uint const fd, t_char* *a_file_content); // TO TEST
#define c_read_file						ft_read_file

#endif
