/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:01:00 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 20:40:35 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}	t_data;

/* Linked List Function */
int		lstsize(t_stack *lst);
t_stack	*lstlast(t_stack *lst);
void	lstclear(t_stack **lst);
t_stack	*lstnew(int number, int index);
void	lstadd_back(t_stack **lst, t_stack *new);

/* Push Swap Function */
void	push_b(t_data *data);
void	push_a(t_data *data);
void	swap_a(t_data *data);
void	swap_b(t_data *data);
void	swap_ss(t_data *data);
void	rotate_ra(t_data *data);
void	rotate_rb(t_data *data);
void	rotate_rr(t_data *data);
void	reverse_rotate_ra(t_data *data);
void	reverse_rotate_rb(t_data *data);
void	reverse_rotate_rrr(t_data *data);

/* Help Function */
void	print(t_stack *head);
void	sorted_position(t_data *data);
void	is_sorted_stack(t_data *data);
void	myclear(t_stack *stack, int error);
void	stack_up(t_data *data, char **argv);

/* algorithm */
void	sort_two(t_data *data);
void	sort_five(t_data *data);
void	sort_three(t_data *data);
void	radix_sort(t_data *data);

#endif