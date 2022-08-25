/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:01:41 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/25 16:38:08 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	delete_node(t_node **head)
{
	t_node	*temp;

	temp = *head;
	*head = (*head)->next;
	free(temp);
}

int	is_empty(t_node **head)
{
	return (head == NULL);
}

t_node	*list_dup(t_node *head)
{
	t_node	*newnode;

	if (!head)
		return (0);
	else
	{
		newnode = (t_node *)malloc(sizeof(t_node));
		newnode->data = head->data;
		newnode->next = list_dup(head->next);
		return (newnode);
	}
}

int	list_len(t_node *head)
{
	int	count;

	count = 0;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
