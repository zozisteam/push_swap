/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:28:58 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:17:59 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	print_list(t_node *current)
{
	while (current != NULL)
	{
		printf("%d  ", current->data);
		current = current->next;
	}
	printf("\n");
}
