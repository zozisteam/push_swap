/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:26:20 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/20 17:50:38 by alalmazr         ###   ########.fr       */
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

//search for a number up between 2 indexes. return it's index
int	search_x_between_i_i(t_node *head, int x, int i_min, int i_max)
{
	t_node	*current;
	int		i;

	current = head;
	i = 0;
	while (current != NULL && current->i != i_min)
		current = current->next;
	while (current != NULL && current->i <= i_max)
	{
		if (current->data == x)
			return (i);
		current = current->next;
		i++;
	}
	return (-1);
}
