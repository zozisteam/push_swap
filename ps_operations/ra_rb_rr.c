/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:12:38 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/06 01:48:07 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	ra(t_node **a)
{
	t_node *head;
	t_node *last;

	head = *a;
	last = get_i_node(*a, list_len(*a) - 1);
	last->next = head;
	(*a) = head->next;
	head->next = NULL;
	printf("ra\n");
}

void	rb(t_node **b)
{
	t_node *head;
	t_node *last;

	head = *b;
	last = get_i_node(*b, list_len(*b) - 1);
	last->next = head;
	(*b) = head->next;
	head->next = NULL;
	printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	t_node *head;
	t_node *last;

	head = *a;
	last = get_i_node(*a, list_len(*a) - 1);
	last->next = head;
	(*a) = head->next;
	head->next = NULL;
	head = *b;
	last = get_i_node(*b, list_len(*b) - 1);
	last->next = head;
	(*b) = head->next;
	head->next = NULL;
	printf("rr\n");
}
