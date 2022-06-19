/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:28:58 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/06 01:37:32 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void print_list(t_node *current)
{
	while (current != NULL)
	{
		printf("%d  ", current->data);
		current = current->next;
	}
	printf("\n");
}