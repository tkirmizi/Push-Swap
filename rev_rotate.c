/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:54:31 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 13:40:04 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **head)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;

	temp1 = (*head);
	temp2 = (*head);
	while (temp1 -> next != NULL)
	{
		temp3 = temp1;
		temp1 = temp1 -> next;
	}
	temp3 -> next = NULL;
	temp1 -> next = temp2;
	temp2 -> previous = temp1;
	temp1 -> previous = NULL;
	*head = temp1;
	ft_printf("rra\n");
}

void	rrb(t_list **head)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;

	temp1 = (*head);
	temp2 = (*head);
	while (temp1 -> next != NULL)
	{
		temp3 = temp1;
		temp1 = temp1 -> next;
	}
	temp3 -> next = NULL;
	temp1 -> next = temp2;
	temp2 -> previous = temp1;
	temp1 -> previous = NULL;
	*head = temp1;
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	rra_2(a);
	rrb_2(b);
	ft_printf("rrr\n");
}

void	rra_2(t_list **head)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;

	temp1 = (*head);
	temp2 = (*head);
	while (temp1 -> next != NULL)
	{
		temp3 = temp1;
		temp1 = temp1 -> next;
	}
	temp3 -> next = NULL;
	temp1 -> next = temp2;
	temp2 -> previous = temp1;
	temp1 -> previous = NULL;
	*head = temp1;
}

void	rrb_2(t_list **head)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;

	temp1 = (*head);
	temp2 = (*head);
	while (temp1 -> next != NULL)
	{
		temp3 = temp1;
		temp1 = temp1 -> next;
	}
	temp3 -> next = NULL;
	temp1 -> next = temp2;
	temp2 -> previous = temp1;
	temp1 -> previous = NULL;
	*head = temp1;
}
