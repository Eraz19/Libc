#ifndef __LIBFT_LIST_H__
#define __LIBFT_LIST_H__

/*
// Include necessary header
------------------------------------------------------*/

// Includes the following types
//	- s_list
//	- t_size
#include "libft.h"

/*
// Libfs_list functions prototype
------------------------------------------------------*/

//*Description :
//		Delete the item of a link (set all the memory to zero and free the memory) and NULL the pointer
//		 to the link item.
//*Parameters :
//		- a_link_content				address of the pointer to the link item
//		- item_size 					size of the memory used for the link item
//Return :
//		void
void 									ft_del_content_data(void* *a_link_content, t_size item_size);
#define c_del_content_data				ft_del_content_data

//*Description :
//		Add a link at the beginning of a link list.
//*Parameters :
//		- a_lst							address of the pointer to the link list
//		- new_link						pointer to the link to add
//Return :
//		void
void 									ft_lstadd(s_list* *a_lst, s_list* new_link);
#define c_lstadd						ft_lstadd

//*Description :
//		Add a link at the end of a link list.
//*Parameters :
//		- lst							pointer to the link list
//		- new_link						pointer to the link to add
//Return :
//		void
void 									ft_lstappend(s_list* lst, s_list* new_link);
#define c_lstappend						ft_lstappend

//*Description :
//		Delete the link list, using the function pointed by del to delete the item of every link in the link list.
//*Parameters :
//		- a_lst							address of the pointer to the link list
//		- del 							pointer to a function wich delete link item
//Return :
//		void
void 									ft_lstdel(s_list* *a_lst, void (*del)(void* *, t_size));
#define c_lstdel						ft_lstdel

//*Description :
//		Delete one link of the link list, using the function pointed by del to delete the item of the link.
//*Parameters :
//		- a_link						address of the pointer to the link
//		- del 							pointer to a function wich delete link item
//Return :
//		void
void 									ft_lstdelone(s_list* *a_link, void (*del)(void* *, t_size));
#define c_lstdelone						ft_lstdelone

//*Description :
//		Applies the function pointed by f to each link of a link list.
//*Parameters :
//		- lst 							pointer to the link list affected by the function pointed by f
//		- f 							pointer to a function to apply on the link list
//Return :
//		void
void 									ft_lstiter(s_list* lst, void (*f)(s_list* elem));
#define c_lstiter						ft_lstiter

//*Description :
//		Allocates a new link list, result of the application of the function pointed by f to each link of a link list.
//*Parameters :
//		- lst 							pointer to the link list affected by the function pointed by f
//		- f 							pointer to a function to apply on the link list
//Return :
//		s_list* 						pointer to the newly allocated link list or NULL if an allocation failes
//*NULL_POINTER_EXCEPTION
//		If lst is NULL, return NULL
s_list* 								ft_lstmap(s_list* lst, s_list* (*f)(s_list* elem));
#define c_lstmap						ft_lstmap

//*Description :
//		Allocates a new link of a link list.
//*Parameters :
//		- item 							item of the link
//		- item_size						size of the memory used for the link item
//Return :
//		s_list*							pointer to the newly allocated link or NULL if the allocation failed
s_list* 								ft_lstnew(void const* item, t_size item_size);
#define c_lstnew						ft_lstnew

#endif
