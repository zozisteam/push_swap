/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:49:07 by alalmazr          #+#    #+#             */
/*   Updated: 2022/07/27 20:41:13 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_blocks(int list_len)
{
	if (list_len > 400)
		return (30);
	else if (list_len > 100)
		return (12);
	else
		return (4);
}

// void	update_pos(t_node **stack)
// {
// 	int	i;
// 	t_node	*current;

// 	i = 1;
// 	current = *stack;
// 	while (current)
// 	{
// 		current->pos = i;
// 		current = current->next;
// 		i++;
// 	}
// }

void	push_back(t_node **a, t_node **b)
{
	while (list_len(*b) > 0)
	{
		get_to_top(b, get_index(*b, find_largest(*b)));
		pa(a, b);
	}
}
