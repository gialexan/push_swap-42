/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:08:06 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/17 00:45:55 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_stack *head);

int main(int argc, char **argv)
{
	t_data data;

	data.stack_a = NULL;
	data.stack_b = NULL;
	stack_up(&data, argv);
	sorted_position(&data);
	radix_sort(&data);
	print(data.stack_a);
}

void	print(t_stack *head)
{
	t_stack *tmp;
	
	tmp = head;
	while (tmp != NULL)
	{
		printf("value -> %d | index -> %d | pointer -> %p\n", tmp->number, tmp->index, tmp->next);
		tmp = tmp->next;
	}
	printf("\n");
}
