#ifndef __LIBFT_MEMORY_H__
#define __LIBFT_MEMORY_H__

/*
// Include necessary header
------------------------------------------------------*/

// Includes the following types
//	- t_size
//	- t_u8
//	- t_u64
//	- t_sint
//	- t_bool
// Includes the following Macros
//	NULL_POINTER_EXCEPTION_CHECK
//	NULL
#include "libft.h"

/*
// Libft_mem functions prototype
------------------------------------------------------*/

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- value
//		- bit_index
//		- length
//*Return :
// 		t_u64
t_u64									ft_getbits(t_u64 value, t_u8 bit_index, t_size length);  // TO DO
#define c_getbits						ft_getbits

//*Description :
//		Allocates a new memory area of n bytes and set every byte to zero (bytes containing '\0').
//*Parameters :
//		- n 							number max of bytes to allocate
//*Return :
// 		void* 							pointer to the newly allocated area or NULL if the memory allocation failes
void*									ft_memalloc(t_size n);  // TO TEST
#define c_memalloc						ft_memalloc

//*Description :
//		Copy n bytes from src to dest or up to the first occurence of c.
//*Parameters :
//		- dest 							pointer to destination memory area
//		- src 							pointer to source memory area
//		- c 							byte that stops the copying from src to dest
//		- n 							number max of bytes to copy
//*Return :
//		void* 							pointer to the next character after c in dest or NULL if c was not found in
//					 	 				 the n first characters of src
//*NULL_POINTER_EXCEPTION
//		If src or dest are NULL, return NULL
void*									ft_memccpy(void* dest, void const* src, t_u8 c, t_size n);  // TO TEST
#define c_memccpy						ft_memccpy

//*Description :
//		Find the first occurence of the byte c in mem.
//*Parameters :
//		- mem 							pointer to the memory area to check
//		- c 							byte wich to find
//		- n 							number max of bytes to check
//Return :
//		void*							pointer to the first occurence of c in mem or NULL if not found
//*NULL_POINTER_EXCEPTION
//		If mem is NULL, return NULL
void*									ft_memchr(void const* mem, t_u8 c, t_size n); // TO TEST
#define c_memchr						ft_memchr

//*Description :
//		Erases the data in the first n bytes of the memory area starting at the location pointed by mem, by
//		 filling it with zeros (bytes containing '\0').
//*Parameters :
//		- mem 							pointer to memory area
// 		- n 							number max of bytes to set to zero
//*Return :
//		void
void 									ft_memclr(void* mem, t_size n); // TO TEST
#define c_memclr						ft_memclr

//*Description :
//		Compare the first n bytes of memory area mem1 and mem2.
//*Parameters :
//		- mem1							pointer to the first memory area to compare
//		- mem2							pointer to the second memory area to compare
//		- n 							number max of bytes to compare
//*Return :
//		t_sint							0 if the two memory area item are equals, or mem1[i]-mem2[i] if
//					 					 the bytes are differents
t_sint 									ft_memcmp(void const* mem1, void const* mem2, t_size n); // TO TEST
#define c_memcmp						ft_memcmp

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- size
//		- c
//*Return :
//		void*
void*									ft_memcnew(t_size size, t_u8 c); // TO DO
//#define c_memcnew						ft_memcnew

//*Description :
//		Copy the item of a source memory area to a destination memory area.
//*Parameters :
//		- dest 							pointer to destination memory area
//		- src 							pointer to source memory area
//		- n 							number max of bytes to copy
//*Return :
//		void*							pointer to destination memory area
//*NULL_POINTER_EXCEPTION
//		If dest or src are NULL, return NULL
void*									ft_memcpy(void* dest, void const* src, t_size n); // TO TEST
#define c_memcpy						ft_memcpy

//*Description :
//		clear (fill with zero the memory), free the memory pointed by *a_p and NULL the pointer.
//*Parameters :
//		- a_p							pointer's address to memory area wich will be freed
//		- n 							size of the memory to clear
//*Return :
//		void
void 									ft_memdel(void* *a_p, t_size n); // TO TEST
//#define c_memdel						ft_memdel

//*Description :
//		Duplicate the n first bytes of the memory pointed by ptr.
//*Parameters :
//		- ptr 							pointer to memory to duplicate
//		- n 							size of the memory to duplicate
//*Return :
//		void* 							pointer to memory result of the duplication
void*									ft_memdup(void const* ptr, t_size n); // TO TEST
#define c_memdup						ft_memdup

//*Description :
//		Free the memory pointed by *a_p and NULL the pointer.
//		!!!! WARNING : Is suggested to use ft_memdel if the size of the memory to free is known (cleaner result).
//*Parameters :
//		- a_p							pointer's address to memory area wich will be freed
//*Return :
//		void
void									ft_memfree(void* *a_p); // TO TEST
//#define c_memdel						ft_memfree

//*Description :
//		A safer memory copy that prevents overlapping of the memory blocks (manages a safe
//		 copy even if dest overlaps src).
//*Parameters :
//		- dest 							pointer to destination memory area
//		- src 							pointer to source memory area
//		- n 							number max of bytes to copy
//*Return :
//		void*							pointer to destination memory area
//*NULL_POINTER_EXCEPTION
//		If dest or src are NULL, return NULL
void*									ft_memmove(void* dest, void const* src, t_size n); // TO TEST
#define c_memmove						ft_memmove

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- size
//*Return :
//		void*
void*									ft_memnew(t_size size); // TO DO
//#define c_memnew						ft_memnew

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- ptr
//		- old
//		- new
//		- n
//*Return :
//		void
void									ft_memrep(void* ptr, t_u8 old, t_u8 new, t_size n); // TO DO
//#define c_memrep						ft_memrep

//*Description :
//		Set the n first bytes of a memory area with c.
//Parameters :
//		- mem 							pointer to memory area
//		- c 							byte use to fill memory area
//		- n 							number max of bytes set with c
//*Return :
//		void*							pointer to memory area newly set with c
//*NULL_POINTER_EXCEPTION
//		If mem is NULL, return NULL
void*									ft_memset(void* mem, t_u8 c, t_size n); // TO TEST
#define c_memset						ft_memset

//*Description : // TO UNDERSTAND
//
//*Parameters :
//		- ptr1
//		- ptr2
//		- size
//*Return :
//		t_bool
t_bool									ft_memswap(void *ptr1, void *ptr2, t_size size); // TO DO
#define c_memswap						ft_memswap

#endif
