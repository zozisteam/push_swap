/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:27:27 by alalmazr          #+#    #+#             */
/*   Updated: 2022/07/27 19:32:17 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"
// #include "list_utils.c"
// #include "push.c"

void swap(t_node *a, t_node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 

t_node	*list_dup(t_node* head)
{
	t_node* newnode;

    if (head == NULL)
        return NULL;
    else
	{
        newnode = (t_node *) malloc(sizeof(t_node));
        newnode->data = head->data;
        newnode->next = list_dup(head->next);
        return (newnode);
    }
}

//sortList() will sort nodes of the list in ascending order 
//If current node's data is greater than next_node's node data, swap the data between them
//next_node will point to node next to current  
void sort_list(t_node **head)
{  
	t_node	*current;
	t_node	*next_node;  

	current = *head;
	next_node = NULL;
	if(head == NULL) 
		return;  
	else
	{ 
    	while(current != NULL)
		{  
        	next_node = current->next;     
 			while(next_node != NULL) 
			{    
				if(current->data > next_node->data)
					  swap(current, next_node);  
          		next_node = next_node->next;  
      		}
        	current = current->next;  
		}      
    }  
} 
