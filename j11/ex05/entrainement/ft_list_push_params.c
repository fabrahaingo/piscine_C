#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int i;
	
	i = ac;
	t_list *clone;
	t_list *elem;
	t_list *first;

	while (i != 0)
	{
		elem = ft_create_elem(av[i]);
		if (i = ac)
			first = elem;
		if (i != 1)
		{
			elem->next = clone;
			clone = elem;
		}
		i--;	
	}
	first = elem;
	return (first);
}
