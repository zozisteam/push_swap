/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:12:44 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/21 13:42:50 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node *a)
{
	int	x;

	x = a->data;
	a->data = a->next->data;
	a->next->data = x;
	printf("sa\n");
}

void	sb(t_node *b)
{
	int	x;

	x = b->data;
	b->data = b->next->data;
	b->next->data = x;
	printf("sb\n");
}

void	ss(t_node *a, t_node *b)
{
	int x;

	x = b->data;
	b->data = b->next->data;
	b->next->data = x;
	x = a->data;
	a->data = a->next->data;
	a->next->data = x;
	printf("ss\n");
}