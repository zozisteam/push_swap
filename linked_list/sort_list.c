/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:12:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/06/22 00:22:44 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	sort_list(t_node *head) 
 {
	 t_node *current;
	 t_node *next;
	 int temp;  

	current = head;
	next = NULL;
	if(head == NULL) 
		return;    
    else
	{  
		while(current != NULL)
		{
			//Node index will point to node next to current
			next = current->next;
			while(next != NULL)
			{
				//If current node's data is greater than index's node data, swap the data between them
				if(current->data > next->data)
				{
					temp = current->data;
					current->data = next->data;
					next->data = temp;
				}
				next = next->next;  
            }  
            current = current->next;  
        }      
    }  
}  