#ifndef __LIBFT_CHAR_H__
#define __LIBFT_CHAR_H__

/*
// Include necessary header
------------------------------------------------------*/

// Includes the following types
//	- t_bool
//	- t_char
//	- t_char_utf8 (utf8 encoding)
// Includes the following Macros
//	TRUE
//	FALSE
#include "libft.h"

/*
// Macros to use in the libft_char
------------------------------------------------------*/

#define CHARSET_BINARY					"01"
#define CHARSET_OCTAL					"01234567"
#define CHARSET_DECIMAL					"0123456789"
#define CHARSET_HEX_LOWER				"0123456789abcdef"
#define CHARSET_HEX_UPPER				"0123456789ABCDEF"
#define CHARSET_HEXADECIMAL				"0123456789aAbBcCdDeEfF"

#define LOWER_CASE_ALPHA_CHARSET 		"abcdefghijklmnopqrstuvwxyz"
#define UPPER_CASE_ALPHA_CHARSET 		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"

#define SPACE_CHARSET 			 		"\t\n \v\f\r"

#define CHARSET_PUNCTUATION				"!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"

/*
// Libft_char functions prototype
------------------------------------------------------*/

//*Description :
//		Is checking if the character givin as argument is a alphabetic or digit character
//		 (in the CHARSET_DECIMAL or LOWER_CASE_ALPHA_CHARSET or UPPER_CASE_ALPHA_CHARSET).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool	 						TRUE or FALSE
t_bool 									ft_isalnum(t_char_utf8 c); // TO TEST
#define c_isalnum						ft_isalnum

//*Description :
//		Is checking if the character givin as argument is an alphabetic character (in the
//		 LOWER_CASE_ALPHA_CHARSET or UPPER_CASE_ALPHA_CHARSET).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool 							TRUE or FALSE
t_bool									ft_isalpha(t_char_utf8 c); // TO TEST
#define c_isalpha						ft_isalpha

//*Description :
//		Is checking if the character givin as argument is in the ASCII table.
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool 							TRUE or FALSE
t_bool	 								ft_isascii(t_char_utf8 c); // TO TEST
#define c_isascii						ft_isascii

//*Description :
//		Is checking if the character givin as argument is a digit character (in the CHARSET_DECIMAL).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool 							TRUE or FALSE
t_bool									ft_isdigit(t_char_utf8 c); // TO TEST
#define c_isdigit						ft_isdigit

//*Description :
//		Is checking if the character givin as argument is a hexadecimal character (in the CHARSET_HEXADECIMAL).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool 							TRUE or FALSE
t_bool									ft_ishexdigit(t_char c); // TO TEST
#define c_ishexdigit					ft_ishexdigit

//*Description :
//		Is checking if the character givin as argument is an lower case character (in the LOWER_CASE_ALPHA_CHARSET).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool	 						TRUE or FALSE
t_bool									ft_islower(t_char_utf8 c); // TO TEST
#define c_islower						ft_islower

//*Description :
//		Is checking if the character givin as argument is a printable character
//		 (between ' ' = 32 and '~' = 126 in the ASCII table).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool	 						TRUE or FALSE
t_bool									ft_isprint(t_char_utf8 c); // TO TEST
#define c_isprint						ft_isprint

//*Description :
//		Is checking if the character givin as argument is a punctuation character
//		 (between '!' = 33 and '/' = 47 or between ':' = 58 and '@' = 64 or between '[' = 91 and '`' = 96 or
//		  between '{' = 123 and '~' = 126 in the ASCII table).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool	 						TRUE or FALSE
t_bool									ft_ispunct(t_char c); // TO TEST
#define c_ispunct						ft_ispunct

//*Description :
//		Is checking if the character givin as argument is a whitespace character (in the SPACE_CHARSET).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool	 						TRUE or FALSE
t_bool									ft_isspace(t_char_utf8 c); // TO TEST
#define c_isspace						ft_isspace

//*Description :
//		Is checking if the character givin as argument is an upper case character (in the UPPER_CASE_ALPHA_CHARSET).
//*Parameters :
//		- c 							character to check
//*Return :
//		t_bool	 						TRUE or FALSE
t_bool									ft_isupper(t_char_utf8 c); // TO TEST
#define c_isupper						ft_isupper

//*Description :
//		Changing the upper case character givin as argument to an lower case character, if the character is 
//		 not a lower case charactere return the input character without changes.
//*Parameters :
//		- c 							character to change
//*Return :
//		t_char 							the new lower case character or the character passed as argument
t_char 									ft_tolower(t_char c); // TO TEST
#define c_tolower						ft_tolower

//*Description :
//		Changing the lower case character givin as argument to an upper case character, if the character is not a lower
//		 case character return the input character without changes.
//*Parameters :
//		- c 							character to change
//*Return :
//		t_char 							the new upper case character or the character passed as argument
t_char 									ft_toupper(t_char c); // TO TEST
#define c_toupper						ft_toupper

#endif
