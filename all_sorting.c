/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:19:17 by taha              #+#    #+#             */
/*   Updated: 2024/06/14 14:13:34 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	all_sort(t_list **a, t_list **b)
{
	t_list	*temp_a;
	t_list	*temp_b;

	while ((*b) != NULL)
	{
		temp_a = (*a);
		temp_b = (*b);
		set_position(a);
		set_position(b);
		while (temp_b != NULL)
		{
			temp_b -> target = find_target(a, temp_b -> data);
			temp_b = temp_b -> next;
		}
		est_amount(a, b);
		sort_it(a, b);
	}
	free(temp_b);
	set_position(a);
	smallest_to_top(a);
}

void	smallest_to_top(t_list **a)
{
	t_list	*temp_a;
	int		i;

	temp_a = (*a);
	i = (*a)->data;
	while (temp_a != NULL)
	{
		if (temp_a -> data < i)
			i = temp_a -> data;
		temp_a = temp_a -> next;
	}
	temp_a = (*a);
	while (temp_a -> data != i)
		temp_a = temp_a -> next;
	while ((*a)->data != i)
	{
		if (temp_a -> above == 0)
			rra(a);
		else
			ra(a);
	}
}

void	sort_it(t_list **a, t_list **b)
{
	int		i;
	t_list	*temp_a;
	t_list	*temp_b;

	temp_a = (*a);
	temp_b = (*b);
	i = find_min_cost(a, b);
	while (temp_b != NULL)
	{
		if (temp_b -> est_amount == i)
			break ;
		temp_b = temp_b -> next;
	}
	while (temp_a != NULL)
	{
		if (temp_a -> data == temp_b -> target)
			break ;
		temp_a = temp_a -> next;
	}
	process(a, b, temp_a, temp_b);
}

void	process(t_list **a, t_list **b, t_list *temp_a, t_list *temp_b)
{
	if ((*a) != NULL && (*b) != NULL)
	{
		while ((*a)->data != temp_a -> data || (*b)->data != temp_b -> data)
		{
			if (((*a)->data != temp_a -> data && (*b)->data != temp_b -> data)
				&& temp_a -> above == temp_b -> above)
			{
				if (temp_a -> above == 1)
					rr(a, b);
				else
					rrr(a, b);
			}
			else
				process_2(a, b, temp_a, temp_b);
		}
	}
	pa(a, b);
}

void	process_2(t_list **a, t_list **b, t_list *temp_a, t_list *temp_b)
{
	if ((*a)->data != temp_a -> data)
	{
		if (temp_a -> above == 1)
			ra(a);
		else
			rra(a);
	}
	if ((*b)->data != temp_b -> data)
	{
		if (temp_b -> above == 1)
			rb(b);
		else
			rrb(b);
	}
}
