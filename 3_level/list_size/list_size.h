#ifndef LIST_SIZE_H
# define LIST_SIZE_H

typedef struct	s_list
{
	struct s_list  *next;
	void			data;
}				  t_list;
