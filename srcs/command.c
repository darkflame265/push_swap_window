#include "../includes/push_swap.h"

void	cm_pa(t_node **one, t_node **two)
{
	t_node *temp;

	//A리스트 맨 위에 B리스트 맨 위 값 삽입.
	ft_putstr("PA\n");
	if ((*two) != NULL) //B가 비어있지 않으면
	{
		if ((*one) == NULL) //A가 비어 있지 않으면
		{
			printf("A리스트가 없어서 새로 만듬.\n");
			*one = ft_lstnew((*two)->num);
		}
		else
		{
			printf("이미 A리스트가 있음.\n");
			add_top_stack((*one), (*two)->num);
			(*one) = (*one)->prev;
		}
		if ((*two)->prev == NULL && (*two)->next == NULL)
		{
			//A리스트 맨 위 지우기.
			(*two)->next = NULL;
			(*two)->prev = NULL;
			(*two) = NULL;
		}
		else
		{
			temp = (*two);
			(*two) = (*two)->next;
			(*two)->prev = NULL;
			free(temp);
		}
	}
}

void	cm_pb(t_node **one, t_node **two)
{
	t_node *temp;

	//B리스트 맨 위에 A리스트 맨 위 값 삽입.
	ft_putstr("PB\n");
	if ((*one) != NULL) //A가 비어있지 않으면
	{
		if ((*two) == NULL) //B가 비어 있지 않으면
		{
			printf("B리스트가 없어서 새로 만듬.\n");
			*two = ft_lstnew((*one)->num);
		}
		else
		{
			printf("이미 B리스트가 있음.\n");
			add_top_stack((*two), (*one)->num);
			(*two) = (*two)->prev;
		}
		if ((*one)->prev == NULL && (*one)->next == NULL)
		{
			//A리스트 맨 위 지우기.
			(*one)->next = NULL;
			(*one)->prev = NULL;
			(*one) = NULL;
		}
		else
		{
			temp = (*one);
			(*one) = (*one)->next;
			(*one)->prev = NULL;
			free(temp);
		}
	}
}

void	cm_sa(t_node **one, t_node **two)
{
	int		temp;

	//SA: 스택a 의 맨 위에 있는 두 요소를 바꿉니다. a의 수가 하나이거나 없는 경우 아무일도 일어나지 않습니다
	ft_putstr("SA\n");
	if ((*one) != NULL)
	{
		temp = (*one)->num;
		if ((*one)->next != NULL)
		{
			(*one)->num = (*one)->next->num;
			(*one)->next->num = temp;
		}
	}
}

void	cm_sb(t_node **one, t_node **two)
{
	int		temp;

	//SB: 스택b 의 맨 위에 있는 두 요소를 바꿉니다. b의 수가 하나이거나 없는 경우 아무일도 일어나지 않습니다
	//printf("SB\n");
	ft_putstr("SB\n");
	if ((*two) != NULL)
	{
		temp = (*two)->num;
		if ((*two)->next != NULL)
		{
			(*two)->num = (*two)->next->num;
			(*two)->next->num = temp;
		}
	}
}

void	cm_ss(t_node **one, t_node **two)
{
	int		temp;

	//SS: 스택b 의 맨 위에 있는 두 요소를 바꿉니다. b의 수가 하나이거나 없는 경우 아무일도 일어나지 않습니다
	//printf("SB\n");
	ft_putstr("SS\n");
	if ((*one) != NULL)
	{
		temp = (*one)->num;
		if ((*one)->next != NULL)
		{
			(*one)->num = (*one)->next->num;
			(*one)->next->num = temp;
		}
	}
	if ((*two) != NULL)
	{
		temp = (*two)->num;
		if ((*two)->next != NULL)
		{
			(*two)->num = (*two)->next->num;
			(*two)->next->num = temp;
		}
	}
}
