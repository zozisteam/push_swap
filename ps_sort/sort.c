/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 03:11:07 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/23 14:03:46 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_loop(t_node **a, int reps)
{
	int i;

	i = 0;
	while(i < reps)
	{
		ra(a);
		i++;
	}
}

void	rr_loop(t_node **a, int reps)
{
	int i;

	i = 0;
	while(i < reps)
	{
		rra(a);
		i++;
	}
}

void	get_min_top(t_node **a, int min_index)
{
	if (min_index == 0)
		return ;
	else
	{
		if (min_index > list_len(*a)/2)
			rr_loop(a, list_len(*a) - min_index);
		else
			r_loop(a, min_index);
	}
}

int	sort(t_node **a, t_node **b, int len)
{
	if (len == 2)
		sort_2(a);
	else if (len == 3)
		sort_3(a);
	else if (len == 4)
	{
		get_min_top(a, get_index(*a, find_smallest(*a)));
		pb(a, b);
		if (!sorted(*a))
			sort_3(a);
		pa(a, b);
	}
	else if (len == 5)
		sort_5(a, b);
	else if (len < 10)
		sort_10(a, b);
	else if (len <= 100)
		sort_99(a, b);
	else if (len > 100)
		sort_100s(a, b);
	return (1);
}
