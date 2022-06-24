/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:14:51 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/21 19:06:21 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "libft/ft_atoi.c"
// #include "libft/ft_split.c"
// #include "libft/ft_strlcpy.c"
// #include "libft/ft_strlen.c"
// #include "linked_list/list_len.c"
// #include "linked_list/list_utils.c"
// #include "linked_list/push.c"
// #include "ps_sort/sort.c"
// #include "ps_operations/sa_sb_ss.c"
// #include "ps_operations/ra_rb_rr.c"
// #include "ps_operations/rra_rrb_rrr.c"

void	init_stack(t_node **a, char **argv)
{
	int		i;

	i = 1;
	while (argv[i])
		i++;
	i--;
	while (i >= 1)
	{	
		push(a, ft_atoi(argv[i]));
		i--;
	}
}

int	check_args(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	//check no recurring num
	//check only nums
	return (1);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	b = NULL;
	a = NULL;
	// argv = (char **) malloc(sizeof(char *) * 3);
	// argv = ft_split("1 3 2",' ');
	// argc = 4;
	if (!check_args(argc, argv))
	 	return (0);
	init_stack(&a, argv);
	if (sorted(a))
	{
		printf("a:\n");
		print_list(a);
		return (1);
	}
	printf("INITIAL STACK a:\n");
	print_list(a);
	sort(&a, &b, list_len(a));
	//sa(a);
	//ra(&a);
	printf("END STACK a:\n");
	print_list(a);
	
	free(a);
	free(b);
//	sort_stacks(a, b);
}
