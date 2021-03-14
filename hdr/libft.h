#ifndef __LIBFT_H__
#define __LIBFT_H__

/*
// Include necessary header
------------------------------------------------------*/

// Includes all the following std types
//	- uint8_t
//	- uint16_t
//	- uint32_t
//	- uint64_t
//	- int8_t
//	- int16_t
//	- int32_t
//	- int64_t
#include <stdint.h>

// Includes all the following std types
//	- size_t
//	- ptrdiff_t
#include <stddef.h>

//Includes the following std MACROS
//  - NULL
#include <string.h>

/*
// Macros to use in the libft
------------------------------------------------------*/

#define NULL_POINTER_EXCEPTION_CHECK 	0

#define SIZE_T_SINT_BUFFER				12

#define NEGATIVE 						-1
#define POSITIVE 						1

/*
// Typing basics std types to use in the libft
------------------------------------------------------*/

//** Indicate the memory size and the range of the Data (u for unsigned and s for signed)
typedef	uint8_t			t_u8;
typedef uint16_t		t_u16;
typedef uint32_t		t_u32;
typedef uint64_t		t_u64;
typedef int8_t			t_s8;
typedef int16_t			t_s16;
typedef int32_t			t_s32;
typedef int64_t			t_s64;

typedef float			t_f32;
typedef double			t_f64;

//typedef uint_fast8_t	t_uint;		TO USE ON A 8 BITS CPU
//typedef uint_fast16_t	t_uint;		TO USE ON A 16 BITS CPU		
typedef uint_fast32_t	t_uint;

//typedef int_fast8_t	t_uint;		TO USE ON A 8 BITS CPU
//typedef int_fast16_t	t_uint;		TO USE ON A 16 BITS CPU		
typedef int_fast32_t	t_sint;


//** Special types for caracter encoding
typedef char			t_char;
typedef wchar_t			t_char_utf8;


//** Boolean type that provides MACROS for TRUE and FALSE, any assignement t_bool thar are not 0 (false) are 1 (true)
typedef _Bool			t_bool;


//** Is an unsigned integral representing the biggest data size the system can handle, depending on the compiler, if 
//*** the compiler is 32 bits t_size is a t_u32, if the compiler is 64 bits t_size is a t_u64
typedef size_t			t_size;


//** Is an signed integral representing the biggest data size the system can handle, depending on the compiler, if 
//*** the compiler is 32 bits t_size is a t_u32, if the compiler is 64 bits t_size is a t_u64.
//** It is used for the result of substraction of pointers.
typedef ptrdiff_t		t_ptrdiff;


//! Represents a boolean false value (0)
#ifdef	FALSE
#undef	FALSE
#endif

#define FALSE			(0)


//! Represents a boolean true value  (1)
#ifdef	TRUE
#undef	TRUE
#endif	

#define TRUE			(1)


//Define the common macros for return values used by several C functions.
#ifdef	OK
#undef	OK
#endif	//! Represents a successful function return
#define OK				(0)

#ifdef	ERROR
#undef	ERROR
#endif	//! Represents a failure function return
#define ERROR			(1)


#define INFINITY		(1. / 0.)
#define NAN				(0. / 0.)

/*
#define PRINTF_S64	"%li"
#define PRINTF_U64	"%lu"
#define PRINTF_SIZE	"%zu"
*/


//Structure that represent a link in a list
typedef struct 			s_list
{

	void*				item;
	size_t 				item_size;
	struct s_list*		next;

}						s_list;

#endif
