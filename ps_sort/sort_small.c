/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:49:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/25 16:24:37 by alalmazr         ###   ########.fr       */
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
	int	i;

	i = 0;
	while (i < 2)
	{
		get_to_top(a, get_index(*a, find_smallest(*a)));
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
	int	size;

	i = 0;
	while (list_len(*a) > 2)
	{
		get_to_top(a, get_index(*a, find_smallest(*a)));
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

// void	get_to_top_optimized(t_node **a, int chunck_max)
// {
// 	int	top;
// 	int	bot;

// 	//search from top;
// 	top = get_index(a, search_upper_half(a, chunck_max));
// 	//search from bottom;
// 	bot = get_index(a, search_lower_half(a, chunck_max));
// 	if (top <= (list_len(a) - bot))
// 		get_to_top(a, top);
// 	else
// 		get_to_top(a, bot);
// }

// int	search_lower_half(t_node **a, int chunk_max)
// {
// 	int		i;
// 	int		min;
// 	t_node	*current;

// 	i = 0;
// 	current = *a;
// 	min = chunk_max;
// 	while (i < list_len(*a) / 2)
// 	{
// 		current = current->next;
// 		i++;
// 	}
// 	while (current != NULL)
// 	{
// 		if (current->data < chunk_max)
// 			min = current->data;
// 		current = current->next
// 	}
// }

// int	search_upper_half(t_node **a, int chunk_max)
// {
// 	int		i;
// 	t_node	*current;

// 	i = 0;
// 	current = *a;
// 	while (i < list_len(*a) / 2)
// 	{
// 		if (current->data <= chunk_max)
// 			return (current->data);
// 		i++;
// 		current = current->next;
// 	}
// }

// int	find_closest_in_chunck(t_node **a, int chunk_max)
// {
// 	int	i;
// 	t_node	*current;
// 	int moves;
// 	//25 chunk max
// 	//a->i 1 - 25
//calc movs till top and save which index takes lowest steps 
//and update if theres lower
// 	//the one with lowest gets pushed to top then into b
// 	i = 0;
// 	current = *a;
// 	moves = calc_moves();
// 	while (current)
// 	{
// 		if (current->i <= chunk_max)
// 		{
// 			if (calc_moves(a, current) < moves);
// 		}
// 		current = current->next;
// 	}
// }
//OPTIMIZE THIS^^^^^^^^^^^^^^

// we have to move all elements <= block_max to B
//if the determined pos of the current number is between the min and
//max of the current block then we push to b
//check that we pushed every number from current block to b, then i++
// void	sort_100(t_node **a, t_node **b)
// {
// 	int		i;
// 	t_node	*head;
// 	int		blocks;

// 	head = *a;
// 	i = 0;
// 	blocks = 5;
// 	while (*a)
// 	{
// 		if (head->i >= (i * blocks) && head->i <= (i + 1) * blocks)
// 			pb(a, b);
// 		else
// 		{
// 			if (get_index(*a, find_smallest(*a)) <= list_len(*a) / 2)
// 				ra(a);
// 			else
// 				rra(a);
// 		}
// 		if (list_len(*b) == (i + 1) * blocks)
// 			i++;
// 		head = *a;
// 	}
// 	while (list_len(*a) > 1)
// 	{
// 		get_to_top(a, get_index(*a, find_smallest(*a)));
// 		pb(a, b);
// 	}
// 	push_back(a, b);
// }
