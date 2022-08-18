/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:26:20 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:18:12 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

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
