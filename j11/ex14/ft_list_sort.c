#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*before_elem;
	t_list	*actual_elem;
	t_list	*next_elem;
	t_list	*clone;
	t_list	*clone2;
	void	*biggest;

	before_elem = *begin_list;
	actual_elem = before_elem->next;
	next_elem = actual_elem->next;
	biggest = *begin_list->data;

	while (next_elem->next != NULL)
	{
		if (biggest < before_elem->data)
			biggest = before_elem->data;
		if ((*cmp)(before_elem->data, actual_elem->data) < 0)
		{
			before_elem->next = actual_elem->next;
			actual_elem->next = before_elem;
			*begin_list = actual_elem;
		}
		else
		{
			if ((*cmp)(actual_elem->data, next_elem->data) < 0)
			{
				clone = actual_elem;
				clone2 = next_elem;
				before_elem->next = next_elem;
				next_elem->next = clone;
				clone->next = clone2->next;
				actual_elem = clone;
			}
			before_elem = before_elem->next;
		}
		if (next_elem->next == NULL && next_elem->data < biggest)
			before_elem = *beggin_list;
	}
}
