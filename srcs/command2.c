#include "../includes/push_swap.h"

void	cm_ra(t_node **one, t_node **two)
{
	int		temp;
	int		flag;

	flag = 0;
	//RA: 택 a에 있는 모든 요소들을 한칸씩 이동합니다. (올라갑니다) 맨 첫번째 요소는 맨 뒤로 갑니다.
	ft_putstr("RA\n");
	if ((*one) != NULL)
	{
		temp = (*one)->num;
		while ((*one)->next != NULL)
		{
			(*one)->num = (*one)->next->num;
			(*one) = (*one)->next;
			flag = 1;
		}
		if (flag == 1)
		{
			(*one)->num = temp;
			(*one) = get_first_node(*one);
		}
	}
}

void	cm_rb(t_node **one, t_node **two)
{
	int		temp;
	int		flag;

	flag = 0;
	//RB: 택 b에 있는 모든 요소들을 한칸씩 이동합니다. (올라갑니다) 맨 첫번째 요소는 맨 뒤로 갑니다.
	ft_putstr("RB\n");
	if ((*two) != NULL)
	{
		temp = (*two)->num;
		while ((*two)->next != NULL)
		{
			(*two)->num = (*two)->next->num;
			(*two) = (*two)->next;
			flag = 1;
		}
		if (flag == 1)
		{
			(*two)->num = temp;
			(*two) = get_first_node(*two);
		}
	}
}

void	cm_rr(t_node **one, t_node **two)
{
	int		temp;
	int		flag;

	flag = 0;
	//RR: ra와 ra 동시 발동.
	ft_putstr("RR\n");
	if ((*one) != NULL)
	{
		temp = (*one)->num;
		while ((*one)->next != NULL)
		{
			(*one)->num = (*one)->next->num;
			(*one) = (*one)->next;
			flag = 1;
		}
		if (flag == 1)
		{
			(*one)->num = temp;
			(*one) = get_first_node(*one);
		}
	}
	flag = 0;
	if ((*two) != NULL)
	{
		temp = (*two)->num;
		while ((*two)->next != NULL)
		{
			(*two)->num = (*two)->next->num;
			(*two) = (*two)->next;
			flag = 1;
		}
		if (flag == 1)
		{
			(*two)->num = temp;
			(*two) = get_first_node(*two);
		}
	}
}
