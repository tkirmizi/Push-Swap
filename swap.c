/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:55:28 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 13:40:21 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list	**head)
{
	t_list	*temp;
	int		i;

	temp = *head;
	temp = temp -> next;
	i = temp -> data;
	temp -> data = (*head)->data;
	(*head)->data = i;
	ft_printf("sa\n");
}

void	sb(t_list	**head)
{
	t_list	*temp;
	int		i;

	temp = *head;
	temp = temp->next;
	i = temp->data;
	temp->data = (*head)->data;
	(*head)->data = i;
	ft_printf("sb\n");
}

void	ss(t_list	**a, t_list	**b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}

void	sa_2(t_list	**head)
{
	t_list	*temp;
	int		i;

	temp = *head;
	temp = temp->next;
	i = temp->data;
	temp->data = (*head)->data;
	(*head)->data = i;
}

void	sb_2(t_list	**head)
{
	t_list	*temp;
	int		i;

	temp = *head;
	temp = temp->next;
	i = temp->data;
	temp->data = (*head)->data;
	(*head)->data = i;
}
