/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 01:23:53 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/22 00:23:11 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

#include "../libft/libft.h"

typedef struct node {
	int			data;
	struct node	*next;
}				t_node;

//classic shit
void	push(t_node **head_ref, int new_data);
int		pop(t_node **head);
void	delete_node(t_node **head);
//utils
int		is_empty(t_node **head);
void	print_list(t_node *current);
int		list_len(t_node *head);
t_node	*get_i_node(t_node *head, int i);
int		get_index(t_node *head, int x);
int		find_smallest(t_node *head);
int		find_largest(t_node *head);
void	sort_list(t_node *head);

#endif