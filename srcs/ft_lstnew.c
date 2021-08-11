#include "../includes/push_swap.h"

t_node	*ft_lstnew(int num)
{
	t_node  *new;

	new = (t_node *)malloc(sizeof(t_node));
	if (new == NULL)
		return (NULL);
	new->num = num;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
