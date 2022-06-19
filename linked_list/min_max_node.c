/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:10:56 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/19 13:18:36 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

int	find_largest(t_node *head)
{
	int max;

	max = head->data;
	while (head != NULL)
	{
		if (max < head->data)
			max = head->data;
		head = head->next;
	}
	return (max);
}
 
int	find_smallest(t_node *head)
{
	int min;
 
	min = head->data;
	while (head != NULL)
	{
		if (min > head->data)
			min = head->data;
		head = head->next;
	}
	return (min);
}
