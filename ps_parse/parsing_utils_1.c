/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:36:19 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/24 18:16:05 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
// #include "../libft/ft_atoi.c"
// #include "../libft/ft_strlen.c"
// #include "../libft/ft_strdup.c"
// #include "../libft/ft_isdigit.c"
// #include "../libft/ft_split.c"
// #include "../libft/ft_strjoin.c"
// #include "../push_swap.c"
// #include "../linked_list/push.c"
// #include "../libft/ft_strlcpy.c"
//  #include "../linked_list/delete_node.c"

int	is_valid_num(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (i == 0)
		{
			if (ft_isdigit(s[i]) == 1)
				i++;
			else if (s[i] == '+' || s[i] == '-')
				i++;
			else
				return (-1);
		}
		else if (ft_isdigit(s[i]) == 1)
		{
			i++;
		}
		else
			return (-1);
	}
	return (1);
}

int	valid_int_range(char *number)
{
	long long	num;

	num = ft_atoi(number);
	if (num > 2147483647 || num < -2147483648)
		error(NULL);
	return (1);
}

int	no_duplicates(char **numbers)
{
	int	i;
	int	j;

	i = 0;
	while (numbers[i])
	{
		j = i + 1;
		while (numbers[j])
		{
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	validate_nums(char **numbers)
{
	int	i;

	i = 0;
	if (!numbers)
		error(NULL);
	while (numbers[i])
	{
		if (is_valid_num(numbers[i]) == -1 || valid_int_range(numbers[i]) == -1)
			error(numbers);
		i++;
	}
	if (no_duplicates(numbers) == -1)
		error(numbers);
	return (1);
}

int	validate_input(t_node **a, int argc, char **argv)
{
	char	*nbrs_str;
	char	**numbers;

	nbrs_str = NULL;
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) == 0)
			exit(1);
		numbers = ft_split(argv[1], ' ');
	}
	else
	{
		nbrs_str = ft_strjoin(input_helper(argc, argv, nbrs_str), "");
		numbers = ft_split(nbrs_str, ' ');
		free(nbrs_str);
	}
	if (!numbers || numbers[0] == NULL || validate_nums(numbers) == -1)
		error(numbers);
	init_stack(a, numbers, argc);
	return (1);
}
