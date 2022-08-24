/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:05:02 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/24 17:46:42 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(char **x)
{
	if (x)
		free2(x);
	write(2, "Error\n", 7);
	exit(1);
}

int	array_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

char	*input_helper(int argc, char **argv, char *nbrs_str)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		nbrs_str = ft_strjoin(nbrs_str, argv[i]);
		nbrs_str = ft_strjoin(nbrs_str, " ");
		i++;
	}
	return (nbrs_str);
}
