/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:19:10 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/17 00:21:32 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_data *data)
{	
	int i;
	int count;
	int	house;
	int size_a;
	int	size_b;
	t_stack *tmp;
	
	house = -1;
	i = -1;
	size_a = lstsize(data->stack_a);
	while(++i < size_a)
	{
		count = 0;
		house++;
		while (count++ < size_a)
		{				
			if (((data->stack_a->index >> house)&1) == 1)
				rotate_ra(data);
			else
				push_b(data);
		}
		size_b = lstsize(data->stack_b);
		while(size_b--)
			push_a(data);
	}
}

void	sorted_position(t_data *data)
{
	t_stack *tmp;
	t_stack	*tmp1;

	tmp = data->stack_a;
	while (tmp != NULL)
	{
		tmp->index = 1;
		tmp1 = data->stack_a;
		while (tmp1 != NULL)
		{
			if (tmp->number > tmp1->number)
				tmp->index++;
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;	
	}

}