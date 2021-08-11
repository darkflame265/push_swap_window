#include "includes/push_swap.h"

t_node	*get_first_node(t_node *node)
{
	while (node->prev != NULL)
	{
		node = node->prev;
		printf("get_first_node\n");
	}
	return (node);
}

t_node	*get_last_node(t_node *node)
{
	while (node->next != NULL)
	{
		node = node->next;
		printf("get_last_node\n");
	}
	return (node);
}

void	sep(t_node **one, t_node **two)
{
	t_node *temp;

	//B리스트 맨 위에 A리스트 맨 위 값 삽입.
	printf("PB\n");
	if ((*two)->prev == NULL) //이미 B리스트가 있음.
	{
		printf("이미 B리스트가 있음.\n");
		add_top_stack((*two), (*one)->num);
		(*two) = (*two)->prev;
	}
	else  // B리스트가 없어서 새로 만듬.
	{
		printf("B리스트가 없어서 새로 만듬.\n");
		*two = ft_lstnew((*one)->num);
	}

	//A리스트 맨 위 지우기.
	temp = (*one);
	(*one) = (*one)->next;
	(*one)->prev = NULL;
	free(temp);
}

int		main(int argc, char **argv)
{
	t_node *one;
	t_node *two;
	t_flag *info;
	int i;

	one = ft_lstnew(ft_atoi(argv[1]));
	//two = ft_lstnew(33);
	two = NULL;
	if (two == NULL)
	{
		printf("AAAA\n");
	}
	else
	{
		printf("BBBBBB\n");
	}

	i = 2;

	//A_LIST에 숫자 삽입.
	while (i < argc)
	{
		add_stack(one, ft_atoi(argv[i]));
		i++;
	}

	//A_LIST 첫번쨰 인수를 B_LIST 맨 위로 이동.  (Push B = pb)
	// cm_pb(&one, &two);
	// cm_pb(&one, &two);
	// cm_pb(&one, &two);

	a_to_b(&one, &two, argc);

	printf("argc: %d\n", argc);
	printf("A  B\n");
	if (one != NULL)
	{
		one = get_first_node(one);
		printf("%d", one->num);
	}
	if (two != NULL)
	{
		two = get_first_node(two);
		printf("  %d", two->num);
	}
	printf("\n");

	i = 1;
	while (i < argc)
	{
		if (one != NULL)
		{
			if (one->next != NULL)
			{
				one = one->next;
				printf("%d", one->num);
			}
		}
		if (two != NULL)
		{
			if (two->next != NULL)
			{
				two = two->next;
				printf("  %d", two->num);
			}
		}
		printf("\n");
		i++;
	}



	printf("-----------------\n");
	//LIST 역출력.
	// i = 1;
	// while (i < argc)
	// {
	// 	printf("num: %d\n", one->num);
	// 	if (one->prev != NULL)
	// 		one = one->prev;
	// 	i++;
	// }
	return (0);
}
