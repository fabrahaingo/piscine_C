#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list = *init;
	init = (t_list*)malloc(sizeof(init));
	init->next = NULL;
	init-> data = data;
	return (init);
}
