/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 01:23:53 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/10 18:40:15 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

#include "../libft/libft.h"

typedef struct node {
	int			data;
	int			i;
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
int		search_list(t_node *head, int x);

# endif