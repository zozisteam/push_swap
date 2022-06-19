/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:23:41 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/19 13:13:54 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

int list_len(t_node *head)
{
    int count;

	count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return (count);
}