#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>
# include <time.h>
# include <fcntl.h>

typedef struct	s_flag
{
	int		two_flag;
}				t_flag;

typedef struct	s_node
{
	int		num;
	struct s_node	*prev;
	struct s_node	*next;
	int		b_first;
}				t_node;

typedef struct	s_stack
{
	t_node		*top;
	t_node		*bottom;
	int		size;
}				t_stack;

typedef struct	s_info
{
	t_stack		*a;
	t_stack		*b;
	int		size;
	int		count;
}				t_info;

void	cm_pa(t_node **one, t_node **two);
void	cm_pb(t_node **one, t_node **two);
void	cm_sa(t_node **one, t_node **two);
void	cm_sb(t_node **one, t_node **two);
void	cm_ss(t_node **one, t_node **two);

void	cm_ra(t_node **one, t_node **two);
void	cm_rb(t_node **one, t_node **two);
void	cm_rr(t_node **one, t_node **two);

void	cm_rra(t_node **one, t_node **two);
void	cm_rrb(t_node **one, t_node **two);
void	cm_rrr(t_node **one, t_node **two);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_atoi(const char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);


t_node	*ft_lstnew(int num);

void	ft_lstadd_front(t_node **lst, t_node *new);
void	add_top_stack(t_node *one, int num);
void	add_stack(t_node *one, int num);

t_node	*get_first_node(t_node *node);
t_node	*get_last_node(t_node *node);

void	a_to_b(t_node **one, t_node **two, int argc);

#endif
