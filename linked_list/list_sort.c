/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:27:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:15:18 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	swap(t_node *a, t_node *b)
{
	int	temp;

	temp = a->data;
	a->data = b->data;
	b->data = temp;
}

t_node	*list_dup(t_node *head)
{
	t_node	*newnode;

	if (head == NULL)
		return (NULL);
	else
	{
		newnode = (t_node *)malloc(sizeof(t_node));
		newnode->data = head->data;
		newnode->next = list_dup(head->next);
		return (newnode);
	}
}
