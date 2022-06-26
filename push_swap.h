/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:23:59 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/26 00:49:26 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./linked_list/linked_list.h"

//operations
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	sa(t_node *a);
void	sb(t_node *b);
void	ss(t_node *a, t_node *b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);


//sorting
int		sort(t_node **a, t_node **b, int len);
int		sorted(t_node *head);
void	sort_99(t_node **a, t_node **b);
void	sort_10(t_node **a, t_node **b);
void	sort_5(t_node **a, t_node **b);
void	sort_3(t_node **a);
void	sort_2(t_node **a);
void	get_min_top(t_node **a, int min_index);
void	r_loop(t_node **a, int reps);
void	rr_loop(t_node **a, int reps);

#endif