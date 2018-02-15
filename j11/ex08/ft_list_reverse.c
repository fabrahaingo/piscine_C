#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*next;
	t_list	*actual;
	t_list	*tmp;

	actual = *begin_list;
	tmp = NULL;

	while (actual != NULL)
	{
		next = actual->next;
		actual->next = tmp;
		tmp = actual;
		actual = next;
	}
	*begin_list = tmp;
}
