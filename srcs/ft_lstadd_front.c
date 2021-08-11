#include "../includes/push_swap.h"

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

void	add_stack(t_node *one, int num)
{
	t_node *temp;

	temp = ft_lstnew(num);
	while (one->next != NULL)
	{
		one = one->next;
	}
	one->next = temp;
	temp->prev = one;
}

void	add_top_stack(t_node *one, int num)
{
	t_node *temp;

	temp = ft_lstnew(num);
	while (one->prev != NULL)
	{
		one = one->prev;
	}
	one->prev = temp;
	temp->next = one;
}

// void	add_stack(t_node *one, int num)
// {
// 	t_node *temp;

// 	temp = ft_lstnew(num);
// 	while (one->next != NULL)
// 	{
// 		one = one->next;
// 	}
// 	one->next = temp;
// 	temp->prev = one;
// }
