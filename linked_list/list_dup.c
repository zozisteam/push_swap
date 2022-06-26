/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_dup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 00:54:53 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/26 00:58:09 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

t_node	*list_dup(t_node* head)
{
	t_node* newnode;

    if (head == NULL)
        return NULL;
    else
	{
        newnode = (t_node *) malloc(sizeof(t_node));
        newnode->data = head->data;
        newnode->next = list_dup(head->next);
        return (newnode);
    }
}