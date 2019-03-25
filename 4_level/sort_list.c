#include <stdlib.h>
#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list *head;

t_list *ft_create(int *item)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = *item;
	new->next = NULL;
	return (new);
}

void push(int *item)
{
	t_list *new;
	if (!(new = ft_create(item)))
		return ;
	new->next = head;
	head = new;
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*temp;

	temp = lst->next;
	while (lst)
	{
		if (!cmp(lst->data, temp->data))
		{
			ft_swap(&lst->data, &temp->data);
			sort_list(lst, cmp);
		}
		lst = lst->next;
	}
	return (lst);
}*/

t_list		*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*begin;
	t_list	*p;

	begin = lst;
	while (lst)
	{
		p = lst->next;
		while (p)
		{
			if (!(*cmp)(lst->data, p->data))
			{
				ft_swap(&lst->data, &p->data);
			}
			p = p->next;
		}
		lst = lst->next;
	}
	return (begin);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int		main()
{
	int arr[7] = {3, 9, 11, 2, 1, 15, 6};
	push(&arr[6]);
	push(&arr[5]);
	push(&arr[4]);
	push(&arr[3]);
	push(&arr[2]);
	push(&arr[1]);
	push(&arr[0]);
	int (*cmp)(int, int) = &ascending;
	sort_list(head, cmp);
	while (head)
	{
		printf("%d", (head->data));
		head = head->next;
	}
	printf("\n");
	return (0);
}
