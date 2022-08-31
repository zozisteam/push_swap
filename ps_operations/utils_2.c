/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:50:25 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/31 11:37:06 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//these functions repeat rotation/reverse rotation as many times as (int reps)
//this is used to get a specific number to the top of the stack
//used with function: get_to_top_a()/get_to_top_b();
void	ra_loop(t_node **a, int reps)
{
	int	i;

	i = 0;
	while (i < reps)
	{
		ra(a);
		i++;
	}
}

void	rra_loop(t_node **a, int reps)
{
	int	i;

	i = 0;
	while (i < reps)
	{
		rra(a);
		i++;
	}
}

void	rb_loop(t_node **b, int reps)
{
	int	i;

	i = 0;
	while (i < reps)
	{
		rb(b);
		i++;
	}
}

void	rrb_loop(t_node **a, int reps)
{
	int	i;

	i = 0;
	while (i < reps)
	{
		rrb(a);
		i++;
	}
}
