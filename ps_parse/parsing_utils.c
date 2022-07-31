/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:36:19 by alalmazr          #+#    #+#             */
/*   Updated: 2022/07/31 17:22:55 by alalmazr         ###   ########.fr       */
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
			// index zero and non num/-/+
			if (ft_isdigit(s[i]) == 1)
				i++;
			else if (s[i]  == '+' || s[i] == '-')
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
		error();//just to free & exit program
	return (1);
}

int	no_duplicates(char **numbers)
{
	int	i;
	int j;

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
		error();
	while (numbers[i])
	{
		//printf("%s\n", numbers[i]);
		if (is_valid_num(numbers[i]) == -1 || valid_int_range(numbers[i]) == -1)
		{
		//	printf("this num didnt pass test\n");
			free2(numbers);
			error();
		}
		// if (valid_int_range(ft_atoi(numbers[i])) == -1)
		// 	error();
		i++;
	}
	if (no_duplicates(numbers) == -1)
	{
		free2(numbers);
		error();
	}

	return (1);
}

int	validate_input(t_node **a, int argc, char **argv)
{
	int		i;
	char	*all_numbers_str;
	char	**numbers;

	i = 1;
	all_numbers_str = NULL;
	while (i < argc)
	{
		all_numbers_str = ft_strjoin(all_numbers_str, argv[i]);
		all_numbers_str = ft_strjoin(all_numbers_str, " ");
		i++;
	}
	numbers = ft_split(all_numbers_str, ' ');
	free(all_numbers_str);
	if (!numbers)
	{
		free2(numbers);
		error();
	}
	if (validate_nums(numbers) == -1)
	{
		free2(numbers);
		error();
		// printf("not validate nums is where i free\n");
		// free2(numbers); //```````
		// printf("done freeing");
		// return (-1);
	}
	init_stack(a, numbers, argc);
	return (1);
}

// int main()
// {
// 	t_node *a;

// 	a = NULL;
// 	printf("%d", validate_input(&a, 3, ft_split("./push_swap --5 -2", ' ')));

//}
