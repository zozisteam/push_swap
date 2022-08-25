/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_0.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:27:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/25 16:43:09 by alalmazr         ###   ########.fr       */
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

int	pop(t_node **head)
{
	int	result;

	if (*head == NULL)
		return (-1);
	result = (*head)->data;
	delete_node(head);
	return (result);
}

void	push(t_node **head, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->i = 0;
	new_node->next = (*head);
	(*head) = new_node;
}

int	search_list(t_node *head, int x)
{
	t_node	*current;

	current = head;
	while (current != NULL)
	{
		if (current->data == x)
			return (1);
		current = current->next;
	}
	return (0);
}

//Node index will point to node next to current
//If current node's data is greater than index's node data, 
//swap the data between them
void	sort_list(t_node **head)
{
	t_node	*current;
	t_node	*next;

	current = *head;
	next = NULL;
	if (head == NULL)
		return ;
	else
	{
		while (current != NULL)
		{
			next = current->next;
			while (next != NULL)
			{
				if (current->data > next->data)
					swap(current, next);
				next = next->next;
			}
			current = current->next;
		}
	}
}
