/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:51:29 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/25 16:34:34 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp( char *str1, char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if ((unsigned char)str1[i] < (unsigned char)str2[i])
			return (-1);
		if ((unsigned char)str1[i] > (unsigned char)str2[i])
			return (1);
		i++;
	}
	return (0);
}
