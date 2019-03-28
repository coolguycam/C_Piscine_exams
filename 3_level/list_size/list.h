#ifndef LIST_H
# define LIST_H

typedef struct	s_list
{
	struct s_list  *next;
	void			data;
}				  t_list;

int		ft_list_size(t_list *begin_list);

#endif
