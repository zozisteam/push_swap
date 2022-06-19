/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:46:16 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/06 01:37:24 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void push(t_node **head, int data)
{
    t_node* new_node;

	new_node = (t_node *) malloc(sizeof(t_node *));
    new_node->data = data;
    new_node->next = (*head);
    (*head) = new_node;
}