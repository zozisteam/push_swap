/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:34:46 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/01 11:25:09 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_more(t_node **a, t_node **b)
{
	int		i;
	t_node	*head;
	int		blocks;

	head = *a;
	i = 0;
	blocks = get_blocks(list_len(*a));
	while (list_len(*a) != 0) // we have to move all elements <= block_max to B
	{
		//if the determined pos of the current number is between the min and max of the current block then we push to b
		if (head->i >= (i * blocks) && head->i <= (i + 1) * blocks)
			pb(a, b);
		else
		{
			if (get_index(*a, find_smallest(*a)) <= list_len(*a) / 2)
				ra(a);
			else
				rra(a);
		}
		//check that we pushed every number from current block to b, then i++
		if (list_len(*b) == (i + 1) * blocks) 
			i++;
		head = *a;
	}
	push_back(a, b);
}
