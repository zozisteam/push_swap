/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:14:51 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/31 12:04:11 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_node **a, char **numbers, int argc)
{
	int	i;

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
	if (!argv[0])
		return (0);
	if (argc <= 1)
	{
		if (argc == 1)
			exit(1);
		free_stack(a);
		error(NULL);
	}
	if (!validate_input(a, argc, argv))
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
		error(NULL);
	}
	if (sorted(a))
	{
		free_stack(&a);
		return (1);
	}
	sort(&a, &b, list_len(a));
	free_stack(&a);
}
