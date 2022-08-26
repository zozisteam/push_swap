/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:49:07 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/26 17:25:07 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_blocks(int list_len)
{
	if (list_len > 400)
		return (37);
	if (list_len > 100)
		return (10);
	if (list_len > 50)
		return (15);
	else
		return (2);
}

void	push_back(t_node **a, t_node **b)
{
	while (list_len(*b) > 0)
	{
		get_to_top(b, get_index(*b, find_largest(*b)));
		pa(a, b);
	}
}
