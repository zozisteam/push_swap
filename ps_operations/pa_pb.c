/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:12:26 by alalmazr          #+#    #+#             */
/*   Updated: 2022/07/28 18:36:50 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **a, t_node **b)
{
	t_node *tmp;

	tmp = *b;
	push(a, tmp->data);
	pop(b);
	ft_printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	t_node *tmp;

	tmp = *a;
	push(b, tmp->data);
	pop(a);
	ft_printf("pb\n");
}