#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;
	t_list	*list;

	i = 0;
	if (begin_list == NULL)
		return (i);
	else
	{
		list = begin_list;
		while (list->next != NULL)
		{
			list = list->next;
			i++;
		}
		return (i + 1);
	}
}
