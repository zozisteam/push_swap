/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_dup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 00:54:53 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:01:24 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

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
