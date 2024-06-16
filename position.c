/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:25:27 by taha              #+#    #+#             */
/*   Updated: 2024/06/14 13:46:15 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_first_position(t_list **head)
{
	t_list	*temp;

	temp = (*head);
	while (temp -> next != NULL)
	{
		temp -> next -> previous = temp;
		temp = temp -> next;
	}
}

void	set_position(t_list **head)
{
	t_list	*temp;
	int		i;
	int		j;

	i = 1;
	j = 0;
	temp = (*head);
	while (temp -> next != NULL)
	{
		i++;
		temp = temp -> next;
	}
	while (temp -> previous != NULL)
		temp = temp -> previous;
	while (j < i / 2)
	{
		temp -> position = j++;
		temp -> above = 1;
		temp = temp -> next;
	}
	temp -> position = j;
	while (temp -> next != NULL)
		temp = temp -> next;
	set_position_rev(&temp, i);
}

void	set_position_rev(t_list **last, int i)
{
	t_list	*temp;
	int		j;

	j = 1;
	temp = (*last);
	while (j <= i / 2)
	{
		temp -> position = j++;
		temp -> above = 0;
		temp = temp -> previous;
	}
}
