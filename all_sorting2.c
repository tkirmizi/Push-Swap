/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_sorting2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:12:53 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 14:15:41 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target(t_list **a, int data)
{
	t_list	*temp;
	int		correct_val;
	int		min_val;

	temp = (*a);
	correct_val = -2147483648;
	min_val = temp -> data;
	while (temp != NULL)
	{
		if (temp -> data < min_val)
			min_val = temp -> data;
		if (temp -> data > data)
		{
			if (correct_val == -2147483648 || temp -> data < correct_val)
				correct_val = temp -> data;
		}
		temp = temp -> next;
	}
	if (correct_val != -2147483648)
		return (correct_val);
	else
		return (min_val);
}

void	est_amount(t_list **a, t_list **b)
{
	t_list	*temp_a;
	t_list	*temp_b;

	temp_a = (*a);
	temp_b = (*b);
	while (temp_b != NULL)
	{
		while (temp_a != NULL)
		{
			if (temp_a -> data == temp_b -> target)
			{
				temp_b -> est_amount = temp_a -> position + temp_b -> position;
				while (temp_a -> previous != NULL)
					temp_a = temp_a -> previous;
				break ;
			}
			temp_a = temp_a -> next;
		}
		temp_b = temp_b -> next;
	}
}

int	find_min_cost(t_list **a, t_list **b)
{
	t_list	*temp_a;
	t_list	*temp_b;
	t_list	*temp_b_2;
	int		i;

	temp_a = (*a);
	temp_b = (*b);
	temp_b_2 = (*b);
	i = temp_b -> est_amount;
	while (temp_b != NULL)
	{
		if (temp_b -> est_amount < i)
			i = temp_b -> est_amount;
		temp_b = temp_b -> next;
	}
	return (i);
}
