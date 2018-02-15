#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*before;
	t_list	*actual;

	actual = *begin_list;
	while ((*cmp)(actual->data, *data_ref) == 0)
	{
		*begin_list = actual->next;
		free(actual);
		actual = *begin_list;
	}
	while (actual != NULL)
	{
		if ((*cmp)(actual->data, *data_ref) == 0)
		{
			before->next = actual->next;
			free(actual);
			actual = before->next;
		}
		actual = actual->next;
		before = actual;
	}
}
