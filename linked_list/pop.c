/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:45:41 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:17:04 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

int	pop(t_node **head)
{
	int	result;

	if (*head == NULL)
		return (-1);
	result = (*head)->data;
	delete_node(head);
	return (result);
}
