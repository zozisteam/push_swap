/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:49:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/20 17:53:57 by alalmazr         ###   ########.fr       */
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
	t_node	*head;

	head = *a;
	if (head->data > head->next->data
		&& find_largest(*a) == head->next->next->data)
	{
		sa(*a);
		return ;
	}
	if (head->data > head->next->data
		&& find_smallest(*a) == head->next->next->data)
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

int	calc_moves(t_node **a, int chunck_max)
{
	int	moves;
	int	top;
	int	bot;

	moves = 0;
	//search from top;
	get_i_node(a, search_x_between_i_i());

	//search from bottom;

}

// int	find_closest_in_chunck(t_node **a, int chunk_max)
// {
// 	int	i;
// 	t_node	*current;
// 	int moves;
// 	//25 chunk max
// 	//a->i 1 - 25
// 	//calc movs till top and save which index takes lowest steps and update if theres lower
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
void	sort_100(t_node **a, t_node **b)
{
	int		i;
	t_node	*head;
	int		blocks;

	head = *a;
	i = 0;
	blocks = 5;
	while (*a)
	{
		if (head->i >= (i * blocks) && head->i <= (i + 1) * blocks)
			pb(a, b);
		else
		{
			if (get_index(*a, find_smallest(*a)) <= list_len(*a) / 2)
				ra(a);
			else
				rra(a);
		}
		if (list_len(*b) == (i + 1) * blocks)
			i++;
		head = *a;
	}
	while (list_len(*a) > 1)
	{
		get_to_top(a, get_index(*a, find_smallest(*a)));
		pb(a, b);
	}
	push_back(a, b);
}
