/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_99.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:34:46 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/26 01:11:15 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_99(t_node **a, t_node **b)
{
	int	i;
	int size;
	int pos;
	t_node *k;
	int	block_max;

	k = list_dup(*a);
	i = 0;
	size = list_len(*a);
	pos = (list_len(k) / 4);
	block_max = get_i_node(k, pos)->data;
	while (list_len(*a) >= 10 && block_max != NULL) // we have to move all elements <= block_max to B
	{
		while (i < size / 4)
		{
			if (get_i_node(*a, 0)->data <= block_max)
				pb(a,b);
			else
				ra(a);
			i++;
		}
		i = 0;
		pos += pos;
		block_max = get_i_node(k, pos)->data;
	}
	sort_10(a, b);
}