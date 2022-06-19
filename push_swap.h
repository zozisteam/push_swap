/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:23:59 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/19 13:52:43 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./linked_list/linked_list.h"

//operations
void	pa(t_node *a, t_node *b);
void	pb(t_node *a, t_node *b);
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
int	sort(t_node **a, t_node **b, int len);

#endif