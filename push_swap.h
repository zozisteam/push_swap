/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:23:59 by alalmazr          #+#    #+#             */
/*   Updated: 2022/08/31 11:41:38 by alalmazr         ###   ########.fr       */
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
void	sort_more(t_node **a, t_node **b);
void	sort_100(t_node **a, t_node **b);
void	sort_10(t_node **a, t_node **b);
void	sort_5(t_node **a, t_node **b);
void	sort_3(t_node **a);
void	sort_2(t_node **a);

//list operations
int		get_blocks(int list_len);
void	push_back(t_node **a, t_node **b);
void	get_to_top_a(t_node **stack, int index);
void	ra_loop(t_node **a, int reps);
void	rra_loop(t_node **a, int reps);
void	get_to_top_b(t_node **stack, int index);
void	rb_loop(t_node **b, int reps);
void	rrb_loop(t_node **b, int reps);
void	set_index(t_node *a, int len);

//parsing
int		parse(t_node **a, int argc, char **argv);
int		validate_input(t_node **a, int argc, char **argv);
void	init_stack(t_node **a, char **numbers, int argc);
char	*input_helper(int argc, char **argv, char *nbrs_str);

//utils
int		array_len(char **arr);
void	error(char **x);
void	free2(char **x);
void	free_stack(t_node **a);

#endif