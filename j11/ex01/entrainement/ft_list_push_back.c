#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last;
	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
		last = *begin_list;
		while (last->next != NULL)
			last = last->next;
		last->next = ft_create_elem(data);
}
