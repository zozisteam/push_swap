/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:50:25 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:21:16 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_loop(t_node **a, int reps)
{
	int	i;

	i = 0;
	while (i < reps)
	{
		ra(a);
		i++;
	}
}

void	rr_loop(t_node **a, int reps)
{
	int	i;

	i = 0;
	while (i < reps)
	{
		rra(a);
		i++;
	}
}

void	get_to_top(t_node **stack, int index)
{
	if (index == 0)
		return ;
	else
	{
		if (index > list_len(*stack) / 2)
			rr_loop(stack, list_len(*stack) - index);
		else
			r_loop(stack, index);
	}
}
