/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 03:11:07 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/18 20:09:03 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
// #include "../linked_list/list_utils.c"
// #include "../linked_list/push.c"
// #include "../linked_list/list_sort.c"
// #include "../linked_list/list_len.c"
// #include "../linked_list/pop.c"
// #include "../linked_list/delete_node.c"

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
		get_to_top(a, get_index(*a, find_smallest(*a)));
		pb(a, b);
		if (!sorted(*a))
			sort_3(a);
		pa(a, b);
	}
	else if (len == 5)
		sort_5(a, b);
	else if (len < 10)
		sort_10(a, b);
	else if (len == 100)
		sort_100(a, b);
	else
		sort_more(a, b);
	return (1);
}

// int main()
// {
// 	t_node *a;

// 	push(&a, 5);
// 	push(&a, 20);
// 	push(&a, 100);
// 	push(&a, 1);
// 	push(&a, -1);
// 	push(&a, 9);
// 	print_list(a);
// 	set_index(a, list_len(a));
// 	print_list(a);
// 	int i = 1;
// 	t_node *tmp = a;
// 	while (tmp)
// 	{
// 		printf("%d ", tmp->i);
// 		tmp = tmp->next;
// 	}
// }