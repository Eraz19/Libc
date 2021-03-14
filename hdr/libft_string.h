#ifndef __LIBFT_STRING_H__
#define __LIBFT_STRING_H__

/*
// Include necessary header
------------------------------------------------------*/

// Includes the following types
//	- t_size
//	- t_char
//	- t_sint
//	- t_bool
// Includes the following Macros
//  NULL_POINTER_EXCEPTION_CHECK
//	NULL
//	TRUE
//  FALSE
#include "libft.h"

/*
// Libft_string functions prototype
------------------------------------------------------*/

//*Description :
//		Appends the string to_append to the end of the string str in a newly allocated string
//		 and free str.
//		!!! More secure than ft_strcat.
//*Parameters :
//		- a_str 						address to pointer to str
//		- to_append						string to append to str
//*Return :
//		t_char* 						pointer to newly allocated string result of the concatenation
//*NULL_POINTER_EXCEPTION
//		If a_str or str or to_append are NULL, return NULL
t_char*									ft_strappend(t_char* *a_str, t_char const* to_append); // TO TEST
#define c_strappend						ft_strappend

//*Description :
//		Concatenate the string src to the end of the string dest (!!! the memory
//		 pointed by dest need to be big enought for dest and src item).
//*Parameters :
//		- dest 							pointer to destination string
//		- src 							pointer to source string
//*Return :
//		t_char* 						pointer to destination string
//*NULL_POINTER_EXCEPTION
//		If src or dest are NULL, return NULL
t_char*									ft_strcat(t_char* dest, t_char const* src); // TO TEST
#define c_strcat						ft_strcat

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- c
//*Return :
//		t_char*
//*NULL_POINTER_EXCEPTION
//		If src or dest are NULL, return NULL
t_char*									ft_strcdup(t_char const* str, t_char c); // TO DO
#define c_strcdup						ft_strcdup

//*Description :
//		Look for the first occurence of the character c in the string str.
//*Parameters :
//		- str 							pointer to the string to check
//		- c 							character to look for in str
//*Return :
//		t_char*		 					pointer to the first occurence of c in str or NULL if not found
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_char*									ft_strchr(t_char const* str, t_char c); // TO TEST
#define c_strchr						ft_strchr

//*Description :
//		Set all the string str to '\0'.
//*Parameters :
//		- str 							pointer to the string to clear
//*Return :
//		void
void 									ft_strclr(t_char* str); // TO TEST
#define c_strclr						ft_strclr

//*Description :
//		Compares the strings str1 and str2.
//		!!!! WARNING : Is suggested to use ft_strequ for checking an equality between str1 and str2.
//*Parameters :
//		- str1 							pointer to the first string
//		- str2							pointer to the second string
//*Return :
//		t_sint 							0 if the strings are equals or str1[i] - str2[i] if their is a difference (i is
//						 				 the index of the first difference found)
t_sint 									ft_strcmp(t_char const* str1, t_char const* str2); // TO TEST
#define c_strcmp						ft_strcmp

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- n
//		- c
//*Return :
//		t_char
t_char*									ft_strcnew(t_size n, t_char c); // TO DO
//#define c_strcnew						ft_strcnew

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- c
//*Return :
//		t_size
t_size									ft_strcount_char(t_char const* str, t_char c); // TO DO
//#define c_strcount_char				ft_strcount_char

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- charset
//*Return :
//		t_size
t_size									ft_strcount_charset(t_char const* str, t_char const* charset); // TO DO
//#define c_strcount_charset			ft_strcount_charset

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- sub_str
//*Return :
//		t_size
t_size									ft_strcount_str(t_char const* str, t_char const* sub_str); // TO DO
//#define c_strcount_str				ft_strcount_str

//*Description :
//		Copy the item of the string src to the string dest (without allocation of dest).
//		!!!! WARNING : Is suggested to use ft_strdup for a clean copy (with allocation).
//*Parameters :
//		- dest 							pointer to the destination string
//		- src 							pointer to the source string
//*Return :
//		t_char* 						pointer to destination string
//*NULL_POINTER_EXCEPTION
//		If dest or src are NULL, return NULL
t_char*									ft_strcpy(t_char* dest, t_char const* src); // TO TEST
#define c_strcpy						ft_strcpy

//*Description :
//		Split the string str using the delimiter character c and place those "substrings" into an array of
//		 strings (the array of strings and its item is freshly allocated).
//*Parameters :
//		- str 							pointer to the string to split
//		- c 							delimiter character
//*Return :
//		t_char** 						pointer to the array of strings after the split or NULL if an error occured
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_char** 								ft_strcsplit(t_char const* str, t_char c); // TO TEST
#define c_strcsplit						ft_strcsplit

//*Description :
//		Clear (set str to '\0') the string *a_str (a_str being the address of str) and NULL the pointer.
//*Parameters :
//		- a_str							address of pointer to str
//*Return :
//		void
void 									ft_strdel(t_char* *a_str); // TO TEST
#define c_strdel						ft_strdel

//*Description :
//		Duplicate the string str, allocates a new string and copy the item of the string
//		 str into this new allocated string.
//*Parameters :
//		- str 							pointer to string to duplicate
//*Return :
//		t_char* 						pointer to str duplication (newly allocated string) or NULL if the allocation failes
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_char*									ft_strdup(t_char const* str); // TO TEST
#define c_strdup						ft_strdup

//*Description :
//		Checks if the string str1 and the string str2 are equals.
//*Parameters :
//		- str1 							pointer to first string
//		- str2							pointer to second string
//*Return :
//		t_bool	 						TRUE or FALSE
//*NULL_POINTER_EXCEPTION
//		If str1 or str2 are NULL, return NULL
t_bool 									ft_strequ(t_char const* str1, t_char const* str2); // TO TEST
#define c_strequ						ft_strequ

//*Description :
//		Free the string *a_str (a_str being the address of str) and NULL the pointer.
//*Parameters :
//		- a_str							address of pointer to str
//*Return :
//		void
void 									ft_strfree(t_char* *a_str); // TO TEST
#define c_strdel						ft_strfree

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- charset
//*Return 
//		t_bool
t_bool									ft_strhas(t_char const* str, t_char const* charset); // TO DO
//#define c_strhas						ft_strhas

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- charset
//*Return :
//		t_bool
t_bool									ft_strhasonly(t_char const* str, t_char const* charset); // TO DO
//#define c_strhasonly					ft_strhasonly

//*Description :
//		Find the first occurence of c and return the index if c is not found return -1.
//*Parameters :
//		- str 							string to check
//		- c 							character to look for
//*Return :
//		t_sint 							index of the first occurence of c in str
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return -1
t_sint									ft_strichr(t_char const* str, t_char c); // TO TEST
#define c_strichr						ft_strichr

//*Description :
//		Compare the string str1 and the string str2 and return the index of the first difference.
//*Parameters :
//		- str1 							pointer to the first string
//		- str2							pointer to the second string
//*Return :
//		t_sint 							index of the first difference between the two strings or -1 if their are equal
//*NULL_POINTER_EXCEPTION
//		If str1 or str2 is NULL, return 0
t_sint 									ft_stricmp(t_char const* str1, t_char const* str2); // TO TEST
#define c_stricmp						ft_stricmp

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- dest
//		- src
//		- offset
//*Return :
//		t_char*
t_char*									ft_strinsert(t_char const* dest, t_char const* src, t_size offset); // TO DO
//#define c_strinsert					ft_strinsert

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- sub_str
//*Return :
//		t_sint
t_sint									ft_stristr(t_char const* str, t_char const* sub_str); // TO DO
#define c_stristr						ft_stristr

//*Description :
//		Apply the function pointed by f (pointer to function) to each character of the string str.
//		 Each character is passed by address to f to be modified.
//*Parameters :
//		- str 							pointer to string to modify
//		- f 							pointer to the function wich modify str
//*Return :
//		void
void 									ft_striter(t_char* str, void (*f)(t_char*)); // TO TEST
#define c_striter						ft_striter

//*Description :
//		Apply the function pointed by f (pointer to function) to each character of the string str.
//		 Each character is passed by address with its index to f to be modified.
//*Parameters :
//		- str 							pointer to string to modify
//		- f 							pointer to the function wich modify str
//*Return :
//		void
void 									ft_striteri(t_char* str, void (*f)(t_uint, t_char*)); // TO TEST
#define c_striteri						ft_striteri

//*Description :
//		Appends the string src to the end of the string dest (!!! the memory
//		 pointed by dest need to be big enought for dest and src item).
//*Parameters :
//		- dest 							pointer to destination string
//		- src 							pointer to source string
//*Return :
//		t_char* 						pointer to destination string
//*NULL_POINTER_EXCEPTION
//		If src or dest are NULL, return NULL
t_char*									ft_strjoin(t_char const* str1, t_char const* str2); // TO TEST
#define c_strjoin						ft_strjoin

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- dest
//		- src
//		- size
//*Return :
//		t_size
t_size									ft_strlcat(t_char* dest, t_char const* src, t_size size); // TO DO
//#define c_strlcat						ft_strlcat

//*Description :
//		Copy the n first characters of the string src to the string dest.
//		!!!! WARNING : The memory allocated to the string dest needs to be big enought to contain
//						  the n characters from src who need to be copied to the string dest.
//*Parameters :
//		- dest 							pointer to destination string
//		- src 							pointer to source string
//		- n 							number max of characters to append to destination string
//*Return :
//		t_size 							size of the string dest after the n characters from source string been appends
//*NULL_POINTER_EXCEPTION
//		If dest or src are NULL, return 0
t_size									ft_strlcpy(t_char* dest, t_char const* src, t_size n); // TO TEST
#define c_strlcpy						ft_strlcpy

//*Description :
//		Give the lenght of a string.
//*Parameters :
//		- str 							pointer to string to check
//*Return :
//		t_size 							size of the string
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return 0
t_size									ft_strlen(t_char const* str); // TO TEST
#define c_strlen						ft_strlen

//*Description :
//		Duplicate the string str (in a newly allocated memory area) without the characters present in the
//		 charset at the beggining.
//*Parameters :
//		- str 							pointer to string to duplicate
//		- charset   					pointer to the charset of character to trim
//*Return :
//		t_char*							pointer to the newly allocated string (result of the duplication) or NULL if the
//						 				 allocation failes, or no character from str to duplicate
//*NULL_POINTER_EXCEPTION
//		If str or charset are NULL, return NULL
t_char*									ft_strltrim(t_char const* str, t_char const* charset); // TO TEST
#define c_strltrim						ft_strltrim

//*Description :
//		Applies the functions pointed by f (pointer to function) to each character of the string str and
//		 place the result in a newly allocated string.
//*Parameters :
//		- str 							pointer to string to modify
//		- f 							pointer to function 
//*Return :
//		t_char* 						pointer to newly allocated string result of the modification of the string str or NULL
//						 				 if the allocation failes
//*NULL_POINTER_EXCEPTION
//		If str or f are NULL, return NULL
t_char*									ft_strmap(t_char const* str, t_char (*f)(t_char)); // TO TEST
#define c_strmap						ft_strmap

//*Description :
//		Applies the functions pointed by f (pointer to function) to each character of the string str and
//		 place the result in a newly allocated string. Each character is passed with its index.
//*Parameters :
//		- str 							pointer to string to modify
//		- f 							pointer to function
//*Return :
//		t_char* 						pointer to newly allocated string result of the modification of the string str or NULL
//						 				 if the allocation failes
//*NULL_POINTER_EXCEPTION
//		If str or f are NULL, return NULL
t_char* 								ft_strmapi(t_char const* str, t_char (*f)(t_uint, t_char)); // TO TEST
#define c_strmapi						ft_strmapi

//*Description :
//		Appends the string src to the end of the string dest (!!! the memory
//		 pointed by dest need to be big enought for dest and src item).
//*Parameters :
//		- dest 							pointer to destination string
//		- src 							pointer to source string
//*Return :
//		t_char* 						pointer to destination string
//*NULL_POINTER_EXCEPTION
//		If src or dest are NULL, return NULL
t_char*									ft_strmerge(t_char* *add_str1, t_char* *add_str2); // TO TEST
#define c_strmerge						ft_strmerge

//*Description :
//		Appends the n first character of the string src to the string dest.
//		!!!! WARNING : The memory allocated to the string dest need to be big enought to contain
//						  the n characters from src who need to be append to the string dest.
//*Parameters :
//		- dest 							pointer to destination string
//		- src 							pointer to source string
//		- n 							number max of characters appends to destination string
//*Return :
//		t_char* 						pointer to the destination string result of the concatenation
//*NULL_POINTER_EXCEPTION
//		If dest or src are NULL, return NULL
t_char*									ft_strncat(t_char* dest, t_char const* src, t_size n); // TO TEST
#define c_strncat						ft_strncat

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- c
//		- n
//*Return :
//		t_char*
t_char*									ft_strnchr(t_char const* str, t_char c, t_size n); // TO DO
//#define c_strnchr						ft_strnchr

//*Description :
//		Compares the n first characters of the string str1 and the n first characters of
//		 the string str2.
//		!!!! WARNING : Is suggested to use ft_strnequ for checking an equality between the first n
//						  characters of str1 and str2.
//*Parameters :
//		- str1 							pointer to the first string
//		- str2							pointer to the second string
//		- n 							number max of character to check
//*Return :
//		t_sint 							0 if the strings are equals or str1[i] - str2[i] if their is a difference (i is
//						 				 the index of the first difference found)
//*NULL_POINTER_EXCEPTION
//		If str1 or str2 is NULL, return NULL
t_sint 									ft_strncmp(t_char const* str1, t_char const* str2, t_size n); // TO TEST
#define c_strncmp						ft_strncmp

//*Description :
//		Copy the n first characters of the string src to the string dest (no allocation
//		 of dest).
//		!!!! WARNING : For a more proper copy is suggested to use ft_strndup (with a memory allocation).
//*Parameters :
//		- dest 							pointer to the destination string
//		- src 							pointer to the source string
//		- n 							number max of characters to copy
//*Return :
//		t_char* 						pointer to destination string or NULL if n equals zero
//*NULL_POINTER_EXCEPTION
//		If dest or src are NULL, result NULL
t_char*									ft_strncpy(t_char* dest, t_char const* src, t_size n); // TO TEST
#define c_strncpy						ft_strncpy

//*Description :
//		Duplicate the n first characters of the string str (allocate a new string and copy
//		 the item of the string str into this new allocated string).
//*Parameters :
//		- str 							pointer to string to duplicate
//		- n 							number max of character to duplicate
//*Return :
//		t_char* 						pointer to str duplication (newly allocated string) or NULL if the allocation failes, or
//						 				 if n equal zero
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_char*									ft_strndup(t_char const* str, t_size n); // TO TEST
#define c_strndup						ft_strndup

//*Description :
//		Checks if the n first characters of the string str1 and the n first characters of the
//		 string str2 are equals.
//*Parameters :
//		- str1 							pointer to first string
//		- str2							pointer to second string
//		- n 							number max of characters to check
//*Return :
//		t_bool	 						TRUE or FALSE
//*NULL_POINTER_EXCEPTION
//		If str1 or str2 is NULL, return FALSE
t_bool 									ft_strnequ(t_char const* str1, t_char const* str2, t_size n); // TO TEST
#define c_strnequ						ft_strnequ

//*Description :
//		Allocate a new string and fill it with the character '\0' (NULL).
//*Parameters :
//		- size 							size of the new allocated string
//*Return :
//		t_char* 						pointer to the newly allocated string or NULL if the allocation failed, or
//						 				 if the size equal zero
t_char*	 								ft_strnew(t_size size); // TO TEST
#define c_strnew						ft_strnew

//*Description :
//		Look for the first occurence of the substring sub_str in the n first characters
//		 of the string str.
//*Parameters :
//		- str 							pointer to the string to check
//		- sub_str						pointer to the substring
//		- n 							number max of characters to check
//*Return :
//		t_char* 						pointer to the first occurence of the substring sub_str in the checked string
//					 	 				 str or NULL if no occurence found, or if n equal zero
//*NULL_POINTER_EXCEPTION
//		If str or sub_str are NULL, return NULL
t_char*									ft_strnstr(t_char const* str, t_char const* sub_str, t_size n); // TO TEST
#define c_strnstr						ft_strnstr

//*Description :
//		Appends the string src to the end of the string dest (!!! the memory
//		 pointed by dest need to be big enought for dest and src item).
//*Parameters :
//		- dest 							pointer to destination string
//		- src 							pointer to source string
//*Return :
//		t_char* 						pointer to destination string
//*NULL_POINTER_EXCEPTION
//		If src or dest are NULL, return NULL
t_char*									ft_strprepend(t_char const* to_prepend, t_char* *add_str); // TO TEST
#define c_strprepend					ft_strprepend

//*Description :
//		Look for the last occurence of the character c in the string str
//*Parameters :
//		- str 							pointer to the string to check
//		- c 							character to look for
//*Return :
//		t_char* 						pointer to the last occurence of the character c in the string str or
//					 	 				 NULL if not found, or if c equal '\0'
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_char*									ft_strrchr(t_char const* str, t_char c); // TO TEST
#define c_strrchr						ft_strrchr

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- sub_str
//*Return :
//		t_char*
t_char*									ft_strremove(t_char const* str, t_char const* sub_str); // TO DO
//#define c_strremove					ft_strremove

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- char_old
//		- char_new
//*Return :
//		t_char*
t_char*									ft_strrep_char(t_char const* str, t_char char_old, t_char char_new); // TO DO
//#define c_strrep_char					ft_strrep_char

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- charset_old
//		- charset_new
//*Return :
//		t_char*
t_char*									ft_strrep_charset(t_char const* str, t_char const* charset_old, t_char const* charset_new); // TO DO
//#define c_strrep_charset				ft_strrep_charset

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- str_old
//		- str_new
//*Return :
//		t_char*
t_char*									ft_strrep_str(t_char const* str, t_char const* str_old, t_char const* str_new); // TO DO
//#define c_strrep_str					ft_strrep_str

//*Description :
//		Reverse the string str in a newly allocated string.
//*Parameters :
//		- str 							pointer to the string to reverse
//*Return :
//		t_char* 						pointer to the newly allocated string containing the string reversed or NULL
//						 				 if the allocation failes
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_char*									ft_strrev(t_char const* str); // TO TEST
#define c_strrev						ft_strrev

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- sub_str
//*Return :
//		t_char*
t_char*									ft_strrstr(t_char const* str, t_char const* sub_str); // TO DO 
//#define c_strrstr						ft_strrstr

//*Description :
//		Duplicate the string pointed by str (in a newly allocated memory area) without the characters present in the
//		 charset at the end.
//*Parameters :
//		- str 							pointer to string for duplication
//		- charset   					pointer to the charset of character to trim
//*Return :
//		t_char*							pointer to the newly allocated string (result of the duplication) or NULL if the
//						 				 allocation failes, or no character from str to duplicate
//*NULL_POINTER_EXCEPTION
//		If str or charset are NULL, return NULL
t_char*									ft_strrtrim(t_char const* str, t_char const* charset); // TO TEST
#define c_strrtrim						ft_strrtrim

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- str
//		- c
//*Return :
//		void
void									ft_strset(t_char* str, t_char c); // TO DO
//#define c_strset						ft_strset

//*Description :
//		Split the string pointed by str using the delimiter charset pointed by charset and place those "substrings"
//		 into an array of strings (the array of strings and its item is freshly allocated).
//*Parameters :
//		- str 							pointer to the string to split
//		- charset 						pointer to the delimiter charset
//*Return :
//		t_char** 						pointer to the array of strings after the split or NULL if an error occured ( allocation
//										 failed, or the item of str and sub_str are equal ...)
//*NULL_POINTER_EXCEPTION
//		If str or charset are NULL, return NULL
t_char** 								ft_strsplit_charset(t_char const* str, t_char const* charset); // TO TEST
#define c_strsplit_charset				ft_strsplit_charset

//*Description :
//		Split the string str using the delimiter string sub_str and place those "substrings"
//		 into an array of strings (the array of strings and its item is freshly allocated).
//*Parameters :
//		- str 							pointer to the string to split
//		- sub_str 						pointer to the delimiter string
//*Return :
//		t_char** 						pointer to the array of strings after the split or NULL if an error occured (allocation
//						 				 failed, or the item of str and sub_str are equal...)
//*NULL_POINTER_EXCEPTION
//		If str or sub_str are NULL, return NULL
t_char** 								ft_strsplit_str(t_char const* str, t_char const* sub_str); // TO TEST
#define c_strsplit_str					ft_strsplit_str

//*Description :
//		Look for the first occurence of the substring sub_str in the string str.
//*Parameters :
//		- str 							pointer to the string to check
//		- sub_str						pointer to the substring
//*Return :
//		t_char* 						pointer to the first occurence of the substring sub_str in the checked string
//					 	 				 str or NULL if no occurence found
//*NULL_POINTER_EXCEPTION
//		If str or sub_str are NULL, return NULL
t_char*									ft_strstr(t_char const* str, t_char const* sub_str); // TO TEST
#define c_strstr						ft_strstr

//*Description :
//		 Duplicate a subdtring from the string str into a newly allocated string.
//*Parameters :
//		- str 							pointer to string
//		- start 						index of the beggining of the substring (in the string str)
//		- len 							size of the substring
//*Return :
//		t_char* 						pointer to the newly allocated substring or NULL if the allocation failes, or if start
//										 is not in the range of the string str
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_char* 								ft_strsub(t_char const* str, t_uint start, t_size len); // TO TEST
#define c_strsub						ft_strsub

//*Description :
//		 Return a only lowercase copy of the string
//*Parameters :
//		- str 							pointer to string
//*Return :
//		t_char* 						pointer to the lowercase version of the string
//*NULL_POINTER_EXCEPTION
//		If str is NULL, return NULL
t_char*									ft_strtolower(t_char const* str); // TO TEST
#define c_strtolower					ft_strtolower

//*Description :
//		Duplicate the string str (in a newly allocated memory area) without the characters present in the
//		 charset at the beggining and at the end.
//*Parameters :
//		- str 							pointer to string for duplication
//		- charset   					pointer to the charset of character to trim
//*Return :
//		t_char*							pointer to the newly allocated string (result of the duplication) or NULL if the
//										 allocation failes, or no character from str to duplicate
//*NULL_POINTER_EXCEPTION
//		If str or charset are NULL, return NULL
t_char*									ft_strtrim(t_char const* str, t_char const* charset); // TO TEST
#define c_strtrim						ft_strtrim

#endif
