#include "ft_list.h"

int	ft_list_size(t_list *begin_list);
{
	int i;
	i = 0;

	t_list	*list;
	if (begin_list == NULL)
		return (i);
	else
	{
		list = begin_list;
		while (list->next != NULL)
		{
			list->next = list;
			i++;
		}
		return (i + 1);
	}
}
