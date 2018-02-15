#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list = *first;
	if (begin_list == NULL)
		*begin_list = ft_create_elem;
	else
	{
		first = ft_create_elem(data);
		first->next = *begin_list;
		*begin_list = first;
	}
}		
