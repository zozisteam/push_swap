/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 03:11:07 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/31 12:04:03 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_node **a)
{
	t_node	*current;

	current = *a;
	while (current != NULL)
	{
		delete_node(a);
		current = *a;
	}
}

void	free2(char **x)
{
	int	i;

	i = 0;
	if (x)
	{
		while (x[i])
		{
			free(x[i]);
			i++;
		}
	}
	free(x);
}

//setting sorted index to each number. this helps to sort more easily
//because we will know where each number should be.
//done by duplicating stack a and sorting it using bubble sort
//we get each node based on the sorted stack and set
//stack a node's -> i to the corresponding sorted
//pop() deletes the head node and frees and assigns new head
//example:
// 44   1    0  -100  200
// [4] [3]  [2]  [1]  [5]
void	set_index(t_node *a, int len)
{
	t_node	*sorted;
	int		i;

	sorted = (list_dup(a));
	sort_list(&sorted);
	i = 1;
	while (i <= len)
	{
		get_i_node(a, get_index(a, sorted->data))->i = i;
		pop(&sorted);
		i++;
	}
	free_stack(&sorted);
}

int	sort(t_node **a, t_node **b, int len)
{
	set_index(*a, len);
	if (len == 2)
		sort_2(a);
	else if (len == 3)
		sort_3(a);
	else if (len == 4)
	{
		get_to_top_a(a, get_index(*a, find_smallest(*a)));
		pb(a, b);
		print_list(*b);
		 if (!sorted(*a))
		 {
			set_index(*a, list_len(*a));
			sort_3(a);
		 }
		pa(a, b);
	}
	else if (len == 5)
		sort_5(a, b);
	else if (len < 10)
		sort_10(a, b);
	else
		sort_more(a, b);
	set_index(*a, len);
	return (1);
}
