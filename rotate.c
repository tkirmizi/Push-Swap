/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:53:46 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 13:40:10 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **head)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;

	temp1 = (*head);
	temp3 = (*head);
	temp2 = node_creator((*head)->data);
	while (temp1 -> next != NULL)
		temp1 = temp1 -> next;
	(*head) = (*head)->next;
	(*head)->previous = NULL;
	temp3 -> next = NULL;
	free(temp3);
	temp1 -> next = temp2;
	temp2 -> previous = temp1;
	ft_printf("ra\n");
}

void	rb(t_list **head)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;

	temp1 = (*head);
	temp3 = (*head);
	temp2 = node_creator((*head)->data);
	while (temp1 -> next != NULL)
		temp1 = temp1 -> next;
	(*head) = (*head)->next;
	(*head)->previous = NULL;
	temp3 -> next = NULL;
	free(temp3);
	temp1 -> next = temp2;
	temp2 -> previous = temp1;
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	ra_2(a);
	rb_2(b);
	ft_printf("rr\n");
}

void	ra_2(t_list **head)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;

	temp1 = (*head);
	temp3 = (*head);
	temp2 = node_creator((*head)->data);
	while (temp1 -> next != NULL)
		temp1 = temp1 -> next;
	(*head) = (*head)->next;
	(*head)->previous = NULL;
	temp3 -> next = NULL;
	free(temp3);
	temp1 -> next = temp2;
	temp2 -> previous = temp1;
}

void	rb_2(t_list **head)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;

	temp1 = (*head);
	temp3 = (*head);
	temp2 = node_creator((*head)->data);
	while (temp1 -> next != NULL)
		temp1 = temp1 -> next;
	(*head) = (*head)->next;
	(*head)->previous = NULL;
	temp3 -> next = NULL;
	free(temp3);
	temp1 -> next = temp2;
	temp2 -> previous = temp1;
}
