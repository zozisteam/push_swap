/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:49:07 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/31 11:39:57 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_blocks(int list_len)
{
	if (list_len > 400)
		return (37);
	if (list_len > 100)
		return (10);
	if (list_len > 50)
		return (15);
	else
		return (2);
}

//functions get_to_top determine whether to use rr or r operation to get
//a specific number which we have (index) of to the top of list
//determine by checking if number is in the bottom or top half
//if its in bottom = reverse rotate is faster
//if its in top	   = rotate is faster
void	get_to_top_b(t_node **b, int index)
{
	if (index == 0)
		return ;
	else
	{
		if (index > list_len(*b) / 2)
			rrb_loop(b, list_len(*b) - index);
		else
			rb_loop(b, index);
	}
}

void	get_to_top_a(t_node **stack, int index)
{
	if (index == 0)
		return ;
	else
	{
		if (index > list_len(*stack) / 2)
			rra_loop(stack, list_len(*stack) - index);
		else
			ra_loop(stack, index);
	}
}


//push everything in stack b into stack a in order.
//get largest number to top of stack b and push it to a
//until b is empty/
void	push_back(t_node **a, t_node **b)
{
	while (list_len(*b) > 0)
	{
		//printf("%d largest",  find_largest(*b));
		get_to_top_b(b, get_index(*b, find_largest(*b)));
		pa(a, b);
	}
}
