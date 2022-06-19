/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:12:41 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/06 01:48:00 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_node **a)
{
	t_node *head;
	t_node *last;
	t_node *new_last;

	head = *a;
	last = get_i_node(*a, list_len(*a) - 1);
	new_last = get_i_node(*a, list_len(*a) - 2);
	last->next = head;
	new_last->next = NULL;
	(*a) = last;
	printf("rra\n");
}

void	rrb(t_node **b)
{
	t_node *head;
	t_node *last;
	t_node *new_last;

	head = *b;
	last = get_i_node(*b, list_len(*b) - 1);
	new_last = get_i_node(*b, list_len(*b) - 2);
	last->next = head;
	new_last->next = NULL;
	(*b) = last;
	printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	t_node *head;
	t_node *last;
	t_node *new_last;

	head = *a;
	last = get_i_node(*a, list_len(*a) - 1);
	new_last = get_i_node(*a, list_len(*a) - 2);
	last->next = head;
	new_last->next = NULL;
	(*a) = last;
	head = *b;
	last = get_i_node(*b, list_len(*b) - 1);
	new_last = get_i_node(*b, list_len(*b) - 2);
	last->next = head;
	new_last->next = NULL;
	(*b) = last;
	printf("rrb\n");
}