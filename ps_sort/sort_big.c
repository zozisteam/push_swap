/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:34:46 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/31 11:51:34 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// we have to move all elements <= block_max to B
//if the determined pos of the current number is between the
// min(i*blocks) and max(i+1 * blocks) of the current block
//then we push to b
//		if (list_len(*b) == (i + 1) * blocks)
//			i++;
//check that we pushed every number from current block to b, then i++
//so we move to next block
void	sort_more(t_node **a, t_node **b)
{
	int		i;
	t_node	*head;
	int		blocks;

	head = *a;
	i = 0;
	blocks = get_blocks(list_len(*a));
	while (list_len(*a) != 0)
	{
		if (head->i >= (i * blocks) && head->i <= (i + 1) * blocks)
			pb(a, b);
		else
			ra(a);
		if (list_len(*b) == (i + 1) * blocks)
			i++;
		head = *a;
	}
	push_back(a, b);
}
