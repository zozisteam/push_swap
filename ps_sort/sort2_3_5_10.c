/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2_3_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:49:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/21 23:40:33 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_node **a)
{
	t_node *head;

	head = *a;
	if (head->data > head->next->data)
		sa(*a);
}

void	sort_3(t_node **a)
{
	t_node *head;

	head = *a;
	if (head->data > head->next->data && find_largest(*a) == head->next->next->data)
	{
		sa(*a);
		return ;
	}
	if (head->data > head->next->data && find_smallest(*a) == head->next->next->data)
	{
		sa(*a);
		rra(a);
		return ;
	}
	if (head->data == find_largest(*a) && find_smallest(*a) == head->next->data)
	{
		ra(a);
		return ;
	}
	if (find_largest(*a) == head->next->data && find_smallest(*a) == head->data)
	{
		sa(*a);
		ra(a);
		return ;
	}
	else
		rra(a);
	return ;
}

void	sort_5(t_node **a, t_node **b)
{
	int i;

	i = 0;
	while (i < 2)
	{
		get_min_top(a, get_index(*a, find_smallest(*a)));
		pb(a, b);
		i++;
	}
	if (!sorted(*a))
		sort_3(a);
	pa(a, b);
	pa(a, b);
}

void	sort_10(t_node **a, t_node **b)
{
	int	i;
	int size;

	i = 0;	
	while (list_len(*a) > 2)
	{
		get_min_top(a, get_index(*a, find_smallest(*a)));
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
