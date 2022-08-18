/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:25:33 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:16:07 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

t_node	*get_i_node(t_node *head, int i)
{
	int		count;
	t_node	*current;

	current = head;
	count = 0;
	while (current != NULL)
	{
		if (count == i)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}

int	find_largest(t_node *head)
{
	int	max;

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
	int	min;

	min = head->data;
	while (head != NULL)
	{
		if (min > head->data)
			min = head->data;
		head = head->next;
	}
	return (min);
}

void	print_list(t_node *head)
{
	t_node	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d  ", current->data);
		current = current->next;
	}
	printf("\n");
}

int	get_index(t_node *head, int x)
{
	t_node	*current;
	int		i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (current->data == x)
			return (i);
		current = current->next;
		i++;
	}
	return (-1);
}
