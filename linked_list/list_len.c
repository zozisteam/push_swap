/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:23:41 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/06 01:38:11 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

int list_len(t_node *head)
{
    int count;
    t_node* current;
	
	current = head;
	count = 0;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return (count);
}