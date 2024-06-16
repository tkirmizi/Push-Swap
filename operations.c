/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:13:36 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 14:22:40 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_a(t_list **head, int arg_count, char **arguman)
{
	int		i;
	t_list	*temp;
	t_list	*new_node;

	i = 1;
	new_node = node_creator(ft_atoi(arguman[0]));
	temp = new_node;
	(*head) = new_node;
	new_node = NULL;
	while (i < arg_count)
	{
		temp -> next = node_creator(ft_atoi(arguman[i++]));
		temp -> next -> previous = temp;
		temp = temp -> next;
	}
}

t_list	*node_creator(int data)
{
	t_list	*nptr;

	nptr = (t_list *)malloc(sizeof (t_list));
	if (!nptr)
		return (NULL);
	nptr -> data = data;
	nptr -> next = NULL;
	nptr -> previous = NULL;
	return (nptr);
}

void	send_b(t_list **a, t_list **b, int arg_count)
{
	int	i;

	i = 0;
	while (i < (arg_count - 3))
	{
		pb(a, b);
		i++;
	}
}

void	sort_a(t_list **a)
{
	t_list	*temp;

	temp = (*a);
	if (temp -> data > temp -> next -> data
		&& temp -> data > temp -> next -> next -> data)
	{
		ra(&temp);
		if (temp -> data > temp -> next -> data)
			sa(&temp);
	}
	else if (temp -> next -> data > temp -> data
		&& temp -> next -> data > temp -> next -> next -> data)
	{
		rra(&temp);
		if (temp -> data > temp -> next -> data)
			sa(&temp);
	}
	else
	{
		if (temp -> data > temp -> next -> data)
			sa(&temp);
	}
	(*a) = temp;
}

void	push_and_position(t_list **a, t_list **b, int arg_count)
{
	send_b(a, b, arg_count);
	sort_a(a);
	b_first_position(b);
}
