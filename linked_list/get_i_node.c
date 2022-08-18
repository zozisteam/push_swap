/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_i_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:32:18 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:00:06 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

t_node	*get_i_node(t_node *head, int i)
{
	int		count;
	t_node	*current;

	current = head;
	count = 0;
	while (current != NULL)
	{
		if (count == i)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
