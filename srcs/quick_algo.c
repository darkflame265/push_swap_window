#include "../includes/push_swap.h"

void	a_to_b(t_node **one, t_node **two, int argc)
{
	//적절한 피봇: argc의 절반 순서의 노드값.
	int pivot;
	int i;
	int ra_count;
	int pb_count;

	ra_count = 0;
	pb_count = 0;

	pivot = argc / 2;
	i = 0;
	while (i < pivot)
	{
		if ((*one)->next != NULL)
		{
			(*one) = (*one)->next;
		}
		i++;
	}
	pivot = (*one)->num;
	get_first_node((*one));
	i = 0;
	printf("pivot: %d\n", pivot);
	while (i < argc - 1)
	{
		if ((*one)->num > pivot)
		{
			cm_ra(&(*one), &(*two));
			ra_count++;
		}
		else
		{
			//cm_pb(&one, &two);
			pb_count++;
		}
		i++;
	}
	i = 0;
	while (i < ra_count)
	{
		//cm_rra(&one, &two);
		i++;
	}
}

void	check_init_list(t_node **one)
{
	// A리스트의 값들을 체크.
	// 숫자값들의 크기 비교.

	// 3 2 1을 정렬해보자. sa, ra
	// 1 3 2를 정렬해보자.
}
