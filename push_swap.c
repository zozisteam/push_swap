/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:14:51 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/01 19:58:16 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/ft_atoi.c"

int	*init_stack(int *a, char **argv)
{
	int		i;
	int		j;

	if (!a)
	{
		printf("not a\n");
		return (0);
	}
	i = 0;
	while (argv[i])
	{
		printf("i: %d %s\n", i, argv[i]);
		i++;
	}
	i--;
	j = 0;
	while (i > 1)
	{	
		a[j] = ft_atoi(argv[i]);
		j++;
		i--;
	}
	a[j] = '\0';
	return (a);
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	i;
	int	j;

	i = 0;
	j = 0;
	a = (int *)malloc(sizeof(int) * argc);
	b = (int *)malloc(sizeof(int) * argc);
	a = init_stack(a, argv);
	printf("contents of a:\n");
	while (a[i])
	{
		printf("%d\t", a[i]);
		i++;
	}
	printf("\n");
	free(a);
	free(b);
//	sort_stacks(a, b);
}
