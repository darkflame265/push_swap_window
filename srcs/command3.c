/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kihkim <kihkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:10:56 by kihkim            #+#    #+#             */
/*   Updated: 2021/06/14 21:16:09 by kihkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	cm_rra(t_node **one, t_node **two)
{
	int		temp;
	int		flag;

	flag = 0;
	//RRA: 스택 a 에 있는 모든 요소들을 한칸씩 낮아집니다. 맨 마지막 요소가 맨 앞으로 옵니다
	ft_putstr("RRA\n");
	if ((*one) != NULL)
	{
		(*one) = get_last_node(*one);
		temp = (*one)->num;
		while ((*one)->prev != NULL)
		{
			(*one)->num = (*one)->prev->num;
			(*one) = (*one)->prev;
			flag = 1;
		}
		if (flag == 1)
		{
			(*one)->num = temp;
			(*one) = get_first_node(*one);
		}
	}
}

void	cm_rrb(t_node **one, t_node **two)
{
	int		temp;
	int		flag;

	flag = 0;
	//RRB: 스택 b 에 있는 모든 요소들을 한칸씩 낮아집니다. 맨 마지막 요소가 맨 앞으로 옵니다
	ft_putstr("RRB\n");
	if ((*two) != NULL)
	{
		(*two) = get_last_node(*two);
		temp = (*two)->num;
		while ((*two)->prev != NULL)
		{
			(*two)->num = (*two)->prev->num;
			(*two) = (*two)->prev;
			flag = 1;
		}
		if (flag == 1)
		{
			(*two)->num = temp;
			(*two) = get_first_node(*two);
		}
	}
}

void	cm_rrr(t_node **one, t_node **two)
{
	int		temp;
	int		flag;

	flag = 0;
	//RRB: 스택 b 에 있는 모든 요소들을 한칸씩 낮아집니다. 맨 마지막 요소가 맨 앞으로 옵니다
	ft_putstr("RRR\n");
	if ((*one) != NULL)
	{
		(*one) = get_last_node(*one);
		temp = (*one)->num;
		while ((*one)->prev != NULL)
		{
			(*one)->num = (*one)->prev->num;
			(*one) = (*one)->prev;
			flag = 1;
		}
		if (flag == 1)
		{
			(*one)->num = temp;
			(*one) = get_first_node(*one);
		}
	}
	if ((*two) != NULL)
	{
		(*two) = get_last_node(*two);
		temp = (*two)->num;
		while ((*two)->prev != NULL)
		{
			(*two)->num = (*two)->prev->num;
			(*two) = (*two)->prev;
			flag = 1;
		}
		if (flag == 1)
		{
			(*two)->num = temp;
			(*two) = get_first_node(*two);
		}
	}
}
