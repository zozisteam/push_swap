/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:14:51 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/01 11:22:59 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "libft/ft_atoi.c"
// #include "libft/ft_x.c"
// #include "libft/ft_strlcpy.c"
// #include "libft/ft_isdigit.c"
// #include "libft/ft_strlen.c"
// #include "linked_list/list_len.c"
// #include "linked_list/pop.c"
// #include "linked_list/delete_node.c"
// #include "linked_list/list_utils.c"
// #include "linked_list/push.c"
// #include "ps_sort/sort.c"
// #include "ps_sort/check_sort.c"
// #include "ps_sort/sort_more.c"
// #include "ps_sort/sort2_3_5_10.c"
// #include "ps_operations/pa_pb.c"
// #include "ps_operations/sa_sb_ss.c"
// #include "ps_operations/ra_rb_rr.c"
// #include "ps_operations/rra_rrb_rrr.c"
// #include "ps_operations/utils_1.c"
// #include "ps_operations/utils_2.c"
// #include "ps_parse/parsing_utils.c"


void	error(void)
{
	write(2, "Error\n", 7);
	exit(1);
}

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
	int i;
	
	i = 0;
	if (x)
	{
		while (x[i])
		{
			free(x[i]);
			i++;
		}
	}
	free (x);
}


int	array_len(char **arr)
{
	int i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

void	init_stack(t_node **a, char **numbers, int argc) //remove argc bcz i calc arrlen
{
	int		i;

	(void)argc;
	i = array_len(numbers) - 1;
	while (i >= 0)
	{
		push(a, ft_atoi(numbers[i]));
		i--;
	}
	free2(numbers);
}


int	parse(t_node **a, int argc, char **argv)
{
	//make sure enough nums to sort
	if (argc <= 1)
	{
		if (argc == 1)
			exit(1);
		free_stack(a);
		error();
	}
	//check only nums & no recurring num
	if(!validate_input(a, argc, argv))
	{
		return (-1);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	b = NULL;
	a = NULL;
	if (!parse(&a, argc, argv))
	{
		free_stack(&a);
	 	error();
	}
	if (sorted(a))
	{
		free_stack(&a);
		return (1);
	}	
//	printf("INITIAL STACK a:\n");
//	print_list(a);
	sort(&a, &b, list_len(a));
	// printf("END STACK a:\n");
	// print_list(a);
	free_stack(&a);
}
