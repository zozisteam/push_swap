// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   zzzz_testmain.c                                    :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/06/05 20:57:31 by alalmazr          #+#    #+#             */
// /*   Updated: 2022/06/06 00:32:03 by alalmazr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "linked_list.h"
// #include "../push_swap.h"
// #include "../operations/sa_sb_ss.c"
// #include "../operations/pa_pb.c"
// #include "../operations/rr_rra_rrb_rrr.c"
// #include "../operations/ra_rb.c"
// // #include "push.c"
// // #include "print_list.c"
// // #include "pop.c"
// // #include "get_i_node.c"
// // #include "list_len.c"
// // #include "delete_node.c"

// int main()
// {
// 	t_node *a;
// 	t_node *b;
// 	int i;

// 	a = NULL;
// 	b = NULL;
// 	i = 0;
// 	while(i < 8)
// 	{
// 		push(&a, i);
// 		i++;
// 	}
// 	printf("A:\n");
// 	print_list(a);
// 	printf("B:\n");
// 	print_list(b);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		push(&b, pop(&a));
// 		i++;
// 	}
// 	printf("A:\n");
// 	print_list(a);
// 	printf("B:\n");
// 	print_list(b);
// 	pop(&a);
// 	printf("\nA:\n");
// 	print_list(a);
// 	printf("B:\n");
// 	print_list(b);
// 	ss(a, b);
// 	printf("A:\n");
// 	print_list(a);
// 	printf("B:\n");
// 	print_list(b);
// }