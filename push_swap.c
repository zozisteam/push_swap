/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:14:51 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/10 18:28:15 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	
	return (1);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	b = NULL;
	a = NULL;
	if (!check_args(argc, argv))
		return (0);
	init_stack(&a, argv);
	sort(&a, &b);
	print_list(a);
	free(a);
	free(b);
//	sort_stacks(a, b);
}
