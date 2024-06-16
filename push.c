/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:52:57 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 13:51:15 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	temp3 = (*b);
	temp = node_creator((*b)->data);
	temp -> next = (*a);
	if (*a != NULL)
		(*a)->previous = temp;
	(*a) = temp;
	temp2 = (*b)->next;
	if (temp2 != NULL)
		temp2 -> previous = NULL;
	temp3 -> next = NULL;
	free(temp3);
	(*b) = temp2;
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	temp3 = (*a);
	temp = node_creator((*a)->data);
	temp -> next = (*b);
	if (*b != NULL)
		(*b)->previous = temp;
	(*b) = temp;
	temp2 = (*a)->next;
	if (temp2 != NULL)
		temp2 -> previous = NULL;
	temp3 -> next = NULL;
	free(temp3);
	(*a) = temp2;
	ft_printf("pb\n");
}
