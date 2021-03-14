#ifndef __LIBFT_CONVERT_H__
#define __LIBFT_CONVERT_H__

/*
// Include necessary header
------------------------------------------------------*/

// Includes the following types
//	- t_u8
//	- t_u16
//	- t_u32
//	- t_u64
//	- t_s8
//	- t_s16
//	- t_s32
//	- t_s64
//	- t_char
//	- t_sint
//	- t_bool
// Includes the following Macros
//	NULL_POINTER_EXCEPTION_CHECK
//	NULL
//	TRUE
//	FALSE
//	NEGATIVE
//	POSITIVE
#include "libft.h"

/*
// Macros to use in the libft_convert
------------------------------------------------------*/

//** Give the size of a buffer for the longest representation of a 8bits, 16bits, 32bits, 64bits
//*** (binary representation)

#define BIN_8BITS_MASK 					0x80
#define BIN_16BITS_MASK					0x8000
#define BIN_32BITS_MASK					0x80000000
#define BIN_64BITS_MASK					0x8000000000000000

#define BUFFER_8BITS					8
#define BUFFER_16BITS					16
#define BUFFER_32BITS					32
#define BUFFER_64BITS					64

#define SIZE_8BITS_BIN_BUFFER			10
#define SIZE_16BITS_BIN_BUFFER			18
#define SIZE_32BITS_BIN_BUFFER			34
#define SIZE_64BITS_BIN_BUFFER			66

#define SIZE_8BITS_HEXA_BUFFER			4
#define SIZE_16BITS_HEXA_BUFFER			8
#define SIZE_32BITS_HEXA_BUFFER			16
#define SIZE_64BITS_HEXA_BUFFER			32

#define	SIZE_S8_BUFFER 					4
#define	SIZE_S16_BUFFER 				6
#define	SIZE_S32_BUFFER 				11
#define	SIZE_S64_BUFFER 				20

#define BINARY_ALPHABET					"01"
#define OCTALE_ALPHABET					"01234567"
#define DECIMAL_ALPHABET				"0123456789"
#define HEXADECIMAL_ALPHABET			"0123456789ABCDEF"

#define HEXA_CONVERTION_8BITS_MASK		0x0F
#define HEXA_CONVERTION_16BITS_MASK		0x000F
#define HEXA_CONVERTION_32BITS_MASK		0x0000000F
#define HEXA_CONVERTION_64BITS_MASK		0x000000000000000F

#define SIGN_FLOAT32_MASK				0x80000000
#define EXPONENT_FLOAT32_MASK			0x7F800000
#define MANTISSA_FLOAT32_MASK			0x007FFFFF
#define MANTISSA_FLOAT32_BITS			23

#define SIGN_FLOAT64_MASK				0x8000000000000000
#define MANTISSA_FLOAT64_MASK			0x000FFFFFFFFFFFFF
#define EXPONENT_FLOAT64_MASK			0x7FF0000000000000
#define MANTISSA_FLOAT64_BITS			52

/*
// Enum/Union to use in the libft_convert
------------------------------------------------------*/

typedef enum 		e_case_style_
{
	LOWERCASE,		//lowercase
	UPPERCASE,		//UPPERCASE
	PASCALCASE,		//PascalCase
	CAMELCASE,		//camelCase
	SNAKECASE		//snake_case
}					e_case_style;

typedef union 		float32_cast
{
	t_u32			u32_cast;
	t_f32			f32_cast;
	t_char			byte_cast[4];
}					u_float32_cast;

typedef union 		float64_cast
{
	t_u64 			u64_cast;
	t_f64 			f64_cast;
	t_char			byte_cast[8];
}					u_float64_cast;

/*
// Libft_convert infos
------------------------------------------------------*/

	// Signed types
	//  - 8bits 		-128 .. 127
	//  - 16bits		-32,768 .. 32,767
	//  - 32bits		-2,147,483,648 .. 2,147,483,647
	//  - 64bits 		-9,223,372,036,854,775,808 .. 9,223,372,036,854,775,807

	// Unsigned tyoes
	//  - 8bits 		 0 .. 255
	//  - 16bits		 0 .. 65,535
	//  - 32bits		 0 .. 4,294,967,295
	//  - 64bits 	     0 .. 18,446,744,073,709,551,615

	// Floats
	//	- The floats are signed
	//	- range +/- INFINTY

/*
// Libft_convert functions prototype
------------------------------------------------------*/

//*Description :
//		Parse an array of ascii character to integer.
//		Ignore the whitespacing characters up to finding a sign character ('+' or '-'), parse the characters correponding
//		 to decimale digits (DECIMAL_ALPHABET) into integer until a non decimale digit character is crossed and ignore
//		 the rest of the array.
//*Parameters :
//		- str 							string to parse
//*Return :
//		t_sint							the interger result of the parsing of str or
//										 0 if an error (not respecting the rules in Description) occured
//*NULL_POINTER_EXCEPTION
//		If str is NULL return 0
t_sint 									ft_atoi(t_char const* str); // TO TEST
#define c_atoi							ft_atoi

//*Description :
//		Get a string wich represent a boolean value (TRUE or FALSE).
//*Parameters :
//		- value							value to interpret
//		- style							style to represent the boolean value
//*Return :
//		t_char*							string result of the convertion from the boolean value or NULL
t_char*									ft_bool_to_str(t_bool value, e_case_style style); // TO TEST
#define c_bool_to_str					ft_bool_to_str

//*Description :
//		Convert an 32bits or 64bits float (float or double) into an array of hexadecimale digits
//		 (HEXADECIMAL_ALPHABET) ascii character.
//*Parameters :
//		- nbr							float to convert
//*Return :
//		t_char*							string result of the convertion from the float nbr
t_char*									ft_f32_to_hex_str(t_f32 nbr); // TO DO
//#define c_f32_to_hex_str				ft_f32_to_hex_str
t_char*									ft_f64_to_hex_str(t_f64 nbr); // TO DO
//#define c_f64_to_hex_str				ft_f64_to_hex_str

//*Description :
//		Convert an 32bits or 64bits float (float or double) into an array of decimale digits
//		 (DECIMAL_ALPHABET) ascii character.
//*Parameters :
//		- nbr							float to convert
//*Return :
//		t_char*							string result of the convertion from the float nbr
t_char*									ft_f32_to_str(t_f32 nbr); // TO DO
//#define c_f32_to_str					ft_f32_to_str
t_char*									ft_f64_to_str(t_f64 nbr); // TO DO
//#define c_f64_to_str					ft_f64_to_str

//*Description :
//		Convert an 32bits or 64bits float (float or double) into an array of decimal digits (DECIMAL_ALPHABET)
//		 ascii character with a define number of digits after the point (defined by the precision parameter).
//*Parameters :
//		- nbr							float to convert
//		- precision						number of digits after the point
//*Return :
//		t_char*							string result of the convertion from the float nbr
t_char*									ft_f32_to_str_p(t_f32 nbr, t_u8 precision); // TO DO
//#define c_f32_to_str_p				ft_f32_to_str_p
t_char*									ft_f64_to_str_p(t_f64 nbr, t_u8 precision); // TO DO
//#define c_f64_to_str_p				ft_f64_to_str_p

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- nbr
//		- result
//*Return :
//		t_bool
t_bool									ft_float_to_str_checkspecial(t_f32 nbr, t_char** result); // TO DO
//#define c_float_to_str_checkspecial	ft_float_to_str_checkspecial

//*Description :
//		Parse an array of ascii character to unsigned integer (8bits, 16bits, 32bits or 64bits).
//		Ignore the whitespacing characters up to finding a sign character ('+'), parse the characters correponding
//		 to hexadecimal digits (HEXADECIMAL_ALPHABET) into integer until a non hexadecimale digit character is crossed and ignore
//		 the rest of the array.
//*Parameters :
//		- str							string to parse
//*Return :
//		t_u8/16/32/64					the unsigned interger result of the parsing of str or
//						 				 0 if an error (not respecting the rules in Description) occured
t_u16									ft_hex_to_u16(t_char const* str); // TO TEST
#define c_hex_to_u16					ft_hex_to_u16
t_u32									ft_hex_to_u32(t_char const* str); // TO TEST
#define c_hex_to_u32					ft_hex_to_u32
t_u64									ft_hex_to_u64(t_char const* str); // TO TEST
#define c_hex_to_u64					ft_hex_to_u64
t_u8									ft_hex_to_u8(t_char const* str); // TO TEST
#define c_hex_to_u8						ft_hex_to_u8

//*Description :
//		Convert an integer into an array of ascii character.
//*Parameters :
//		- nbr							integer to convert
//*Return :
//		t_char*							string result of the convertion from the integer nbr
t_char* 								ft_itoa(t_sint nbr); // TO TEST
#define c_itoa							ft_itoa

//*Description :
//		Print in binary representation (base 2) of a 8bits, 16bits, 32bits or 64bits value.
//*Parameters :
//		- value							value to print in binary
//*Return :
//		t_char*							pointer to string or NULL (if malloc failed)
t_char*									ft_s16_to_bin(t_s16 value); // TO TEST
#define c_print_s16_binary				ft_s16_to_bin
t_char*									ft_s32_to_bin(t_s32 value); // TO TEST
#define c_print_s32_binary				ft_s32_to_bin
t_char*									ft_s64_to_bin(t_s64 value); // TO TEST
#define c_print_s64_binary				ft_s64_to_bin
t_char*									ft_s8_to_bin(t_s8 value); // TO TEST
#define c_print_s8_binary				ft_s8_to_bin

//*Description :
//		Convert an 8bits, 16bits, 32bits or 64bits signed integer into an array of ascii character.
//*Parameters :
//		- nbr							integer to convert
//*Return :
//		t_char*							string result of the convertion from the integer nbr
t_char*									ft_s16_to_str(t_s16 nbr); // TO TEST
#define c_s16_to_str					ft_s16_to_str
t_char*									ft_s32_to_str(t_s32 nbr); // TO TEST
#define c_s32_to_str					ft_s32_to_str
t_char*									ft_s64_to_str(t_s64 nbr); // TO TEST
#define c_s64_to_str					ft_s64_to_str
t_char*									ft_s8_to_str(t_s8 nbr);	// TO TEST
#define c_s8_to_str						ft_s8_to_str

//*Description : // TO UNDERSTAND
//		Convert an 8bits, 16bits, 32bits, 64bits signed in the given base (the base equal to base string length).
//*Parameters :
//		- nbr 							integer to convert
//		- base 							string representing the base
//*Return :
//		t_char*							string result of the convertion from the integer nbr
//*NULL_POINTER_EXCEPTION
//		If base is NULL return NULL
t_char*									ft_s16_to_strbase(t_s16 nbr, t_char const* base); // TO TEST
#define c_s16_to_strbase				ft_s16_to_strbase
t_char*									ft_s32_to_strbase(t_s32 nbr, t_char const* base); // TO TEST
#define c_s32_to_strbase				ft_s32_to_strbase
t_char*									ft_s64_to_strbase(t_s64 nbr, t_char const* base); // TO TEST
#define c_s64_to_strbase				ft_s64_to_strbase
t_char*									ft_s8_to_strbase(t_s8 nbr, t_char const* base); // TO TEST
#define c_s8_to_strbase					ft_s8_to_strbase

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- value
//*Return :
//		t_char*
t_char*									ft_size_to_str(t_size value); // TO DO
//#define c_size_to_str					ft_size_to_str

//*Description :
//		Parse a boolean string (can be 0, 1, true, false, TRUE or FALSE) into a boolean value.
//*Parameters :
//		- str							string to parse into boolean value
//*Return :
//		t_bool							TRUE or FALSE
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_bool									ft_str_to_bool(t_char const* str); // TO TEST
#define c_str_to_bool					ft_str_to_bool

//*Description :
//		Parse an array of ascii character to float (32bits or 64bits).
//		Ignore the whitespacing characters up to finding a sign character ('+' or '-'), parse the characters correponding
//		 to decimale digits (DECIMAL_ALPHABET) into float until a non decimale digit character is crossed and ignore
//		 the rest of the array.
//*Parameters :
//		- str 							string to parse
//*Return :
//		t_f32/64						the float result of the parsing of str or
//						 				 0 if an error (not respecting the rules in Description) occured
//*NULL_POINTER_EXCEPTION
//		If str is NULL return 0
t_f32									ft_str_to_f32(t_char const* str); // TO DO
//#define c_str_to_f32					ft_str_to_f32
t_f64									ft_str_to_f64(t_char const* str); // TO DO
//#define c_str_to_f64					ft_str_to_f64

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- result_tmp
//*Return :
//		t_bool
t_bool									ft_str_to_float_checkinvalid(t_char const* str, t_char** result_tmp); // TO DO
#define c_str_to_float_checkinvalid		ft_str_to_float_checkinvalid

//*Description :
//		Parse an array of ascii character to a signed integer (8bits, 16bits, 32bits or 64bits).
//		Ignore the whitespacing characters up to finding a sign character ('+' or '-'), parse the characters correponding
//		 to decimale digits (DECIMAL_ALPHABET) into integer until a non decimale digit character is crossed and ignore
//		 the rest of the array.
//*Parameters :
//		- str 							string to parse
//*Return :
//		t_s8/16/32/64					the signed interger result of the parsing of str or
//						 				 0 if an error (not respecting the rules in Description) occured
//*NULL_POINTER_EXCEPTION
//		If str is NULL return 0
t_s16									ft_str_to_s16(t_char const* str); // TO TEST
#define c_str_to_s16					ft_str_to_s16
t_s32									ft_str_to_s32(t_char const* str); // TO TEST
#define c_str_to_s32					ft_str_to_s32
t_s64									ft_str_to_s64(t_char const* str); // TO TEST
#define c_str_to_s64					ft_str_to_s64
t_s8									ft_str_to_s8(t_char const* str); // TO TEST
#define c_str_to_s8						ft_str_to_s8

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//*Return :
//		t_size
t_size									ft_str_to_size(t_char const* str); // TO DO
//#define c_str_to_size					ft_str_to_size

//*Description :
//		Parse an array of ascii character to unsigned integer (8bits, 16bits, 32bits or 64bits).
//		Ignore the whitespacing characters up to finding a sign character ('+' or '-'), parse the characters correponding
//		 to decimale digits (DECIMAL_ALPHABET) into integer until a non decimale digit character is crossed and ignore
//		 the rest of the array.
//*Parameters :
//		- str 							string to parse
//*Return :
//		t_u8/16/32/64					the unsigned interger result of the parsing of str or
//						 				 0 if an error (not respecting the rules in Description) occured
//*NULL_POINTER_EXCEPTION
//		If str is NULL return 0
t_u16									ft_str_to_u16(t_char const* str); // TO TEST
#define c_str_to_u16					ft_str_to_u16
t_u32									ft_str_to_u32(t_char const* str); // TO TEST
#define c_str_to_u32					ft_str_to_u32
t_u64									ft_str_to_u64(t_char const* str); // TO TEST
#define c_str_to_u64					ft_str_to_u64
t_u8									ft_str_to_u8(t_char const* str); // TO TEST
#define c_str_to_u8						ft_str_to_u8

//*Description :
//		Convert the value represented by str in base "base" in a 8bits, 16bits, 32bits, 64bits signed value.
//*Parameters :
//		- str 							string representing the value in base "base"
//		- base 							string of the base nits (for n bits)
//*Return :
//		t_s8/16/32/64 					the result of the conversion of str in 8bits, 16bits, 32bits, 64bits
//*NULL_POINTER_EXCEPTION
//		If str or base are NULL return 0
t_s16									ft_strbase_to_s16(t_char const* str, t_char const* base); // TO TEST
#define c_strbase_to_s16				ft_strbase_to_s16
t_s32									ft_strbase_to_s32(t_char const* str, t_char const* base); // TO TEST
#define c_strbase_to_s32				ft_strbase_to_s32
t_s64									ft_strbase_to_s64(t_char const* str, t_char const* base); // TO TEST
#define c_strbase_to_s64				ft_strbase_to_s64
t_s8									ft_strbase_to_s8(t_char const* str, t_char const* base); // TO TEST
#define c_strbase_to_s8					ft_strbase_to_s8

//*Description :
//		Convert the value represented by str in base "base" in a 8bits, 16bits, 32bits, 64bits unsigned value.
//*Parameters :
//		- str 							string representing the value in base "base"
//		- base 							string of the base nits (for n bits)
//*Return :
//		t_s8/16/32/64 					the result of the conversion of str in 8bits, 16bits, 32bits, 64bits
//*NULL_POINTER_EXCEPTION
//		If str or base are NULL return 0
t_u16									ft_strbase_to_u16(t_char const* str, t_char const* base); // TO TEST
#define c_strbase_to_u16				ft_strbase_to_u16
t_u32									ft_strbase_to_u32(t_char const* str, t_char const* base); // TO TEST
#define c_strbase_to_u32				ft_strbase_to_u32
t_u64									ft_strbase_to_u64(t_char const* str, t_char const* base); // TO TEST
#define c_strbase_to_u64				ft_strbase_to_u64
t_u8									ft_strbase_to_u8(t_char const* str, t_char const* base); // TO TEST
#define c_strbase_to_u8					ft_strbase_to_u8

//*Description :
//		Print in binary representation (base 2) of a 8bits, 16bits, 32bits or 64bits value.
//*Parameters :
//		- value							value to print in binary
//*Return :
//		t_char*							pointer to string or NULL (if malloc failed)
t_char*									ft_u16_to_bin(t_u16 value); // TO TEST
#define c_print_u16_binary				ft_u16_to_bin
t_char*									ft_u32_to_bin(t_u32 value); // TO TEST
#define c_print_u32_binary				ft_u32_to_bin
t_char*									ft_u64_to_bin(t_u64 value); // TO TEST
#define c_print_u64_binary				ft_u64_to_bin
t_char*									ft_u8_to_bin(t_u8 value); // TO TEST
#define c_print_u8_binary				ft_u8_to_bin

//*Description :
//		Get a string representing an unsigned integer (in 8bits, 16bits, 32bits, 64bits) in Hexadecimal
//		 (HEXADECIMAL_ALPHABET).
//*Parameters :
//		- nbr 							value to represent in Hexadecimal
//*Return :
//		t_char*							string result of the convertion from the integer nbr
t_char*									ft_u16_to_hex(t_u16 nbr); // TO TEST
#define c_u16_to_hex					ft_u16_to_hex
t_char*									ft_u32_to_hex(t_u32 nbr); // TO TEST
#define c_u32_to_hex					ft_u32_to_hex
t_char*									ft_u64_to_hex(t_u64 nbr); // TO TEST
#define c_u64_to_hex					ft_u64_to_hex
t_char*									ft_u8_to_hex(t_u8 nbr); // TO TEST
#define c_u8_to_hex						ft_u8_to_hex

//*Description :
//		Convert an 8bits, 16bits, 32bits or 64bits unsigned integer into an array of ascii character.
//*Parameters :
//		- nbr							integer to convert
//*Return :
//		t_char*							string result of the convertion from the integer nbr
t_char*									ft_u16_to_str(t_u16 nbr); // TO TEST
#define c_u16_to_str					ft_u16_to_str
t_char*									ft_u32_to_str(t_u32 nbr); // TO TEST
#define c_u32_to_str					ft_u32_to_str
t_char*									ft_u64_to_str(t_u64 nbr); // TO TEST
#define c_u64_to_str					ft_u64_to_str
t_char*									ft_u8_to_str(t_u8 nbr);	// TO TEST
#define c_u8_to_str						ft_u8_to_str

//*Description :
//		Convert an 8bits, 16bits, 32bits, 64bits unsigned in the given base (the base equal to base string length).
//*Parameters :
//		- nbr 							integer to convert
//		- base 							string representing the base
//*Return :
//		t_char*							string result of the convertion from the integer nbr
//*NULL_POINTER_EXCEPTION
//		If base is NULL return NULL
t_char*									ft_u16_to_strbase(t_u16 nbr, t_char const* base); // TO TEST
#define c_u16_to_strbase				ft_u16_to_strbase
t_char*									ft_u32_to_strbase(t_u32 nbr, t_char const* base); // TO TEST
#define c_u32_to_strbase				ft_u32_to_strbase
t_char*									ft_u64_to_strbase(t_u64 nbr, t_char const* base); // TO TEST
#define c_u64_to_strbase				ft_u64_to_strbase
t_char*									ft_u8_to_strbase(t_u8 nbr, t_char const* base); // TO TEST
#define c_u8_to_strbase					ft_u8_to_strbase

#endif
