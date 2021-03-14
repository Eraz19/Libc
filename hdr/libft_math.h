#ifndef __LIBFT_MATH_H__
#define __LIBFT_MATH_H__

/*
// Include necessary header
------------------------------------------------------*/

// Includes the following types
//	- t_sint
// Includes the following Macros
//
#include "libft.h"

/*
// Macros to use in the libft_convert
------------------------------------------------------*/

/*
// Libft_convert functions prototype
------------------------------------------------------*/

//*Description :
//		Raises the operand nbr to the power p.
//*Parameters :
//		- nbr 							number to raise to the power p
//		- p 							the power to raise nbr with
//*Return :
//		t_sint							the interger result of the raise of nbr to the power p
t_sint 									ft_pow(t_sint nbr, t_sint p);
#define c_pow							ft_pow

#endif
