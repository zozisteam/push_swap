/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:12:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:18:15 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

//Node index will point to node next to current
//If current node's data is greater than index's node data, 
//swap the data between them
void	sort_list(t_node **head)
{
	t_node	*current;
	t_node	*next;
	int		temp;

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
				{
					temp = current->data;
					current->data = next->data;
					next->data = temp;
				}
				next = next->next;
			}
			current = current->next;
		}
	}
}
