/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:49:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/31 12:02:07 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_node **a)
{
	t_node	*head;

	head = *a;
	if (head->data > head->next->data)
		sa(*a);
}

//check according to (i). is is the order they should be sorted
//as. (we use set_index before using sort_3)
void	sort_3(t_node **a)
{
	t_node	*one;
	t_node	*two;
	t_node	*three;

	one = *a;
	two = (*a)->next;
	three = (*a)->next->next;
	if (one->i == 2 && two->i == 1 && three->i == 3)
		sa(*a);
	else if (one->i == 2 && two->i == 3 && three->i == 1)
		rra(a);
	else if (one->i == 3 && two->i == 1 && three->i == 2)
		ra(a);
	else if (one->i == 1 && two->i == 3 && three->i == 2)
	{
		sa(*a);
		ra(a);
	}
	else if (one->i == 3 && two->i == 2 && three->i == 1)
	{
		sa(*a);
		rra(a);
	}
	return ;
}

void	sort_5(t_node **a, t_node **b)
{
	get_to_top_a(a, get_index(*a, find_smallest(*a)));
	pb(a, b);
	get_to_top_a(a, get_index(*a, find_smallest(*a)));
	pb(a, b);
	set_index(*a, list_len(*a));
	sort_3(a);
	pa(a, b);
	pa(a, b);
}

void	sort_10(t_node **a, t_node **b)
{
	int	i;
	int	size;

	i = 0;
	while (list_len(*a) > 2)
	{
		get_to_top_a(a, get_index(*a, find_smallest(*a)));
		pb(a, b);
	}
	sort_2(a);
	size = list_len(*b);
	while (i < size)
	{
		pa(a, b);
		i++;
	}
}
