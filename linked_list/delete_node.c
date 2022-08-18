/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:01:41 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:01:48 by alalmazr         ###   ########.fr       */
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
