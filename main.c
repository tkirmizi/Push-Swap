/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:17:26 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 14:39:00 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**arguman;
	int		arg_count;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		arg_count = count_args(argv);
		arguman = arguman_return(argv, arg_count);
		if (check_and_print_error(arg_count, arguman) == 1)
			return (1);
		process_arguments(&a, &b, arg_count, arguman);
	}
	else
		ft_printf("Error\n");
	return (0);
}

void	process_arguments(t_list **a, t_list **b, int arg_count, char **arguman)
{
	stack_a(a, arg_count, arguman);
	if (arg_count == 3)
	{
		sort_a(a);
		free_list(*a);
		free_after_split(arguman);
		return ;
	}
	push_and_position(a, b, arg_count);
	all_sort(a, b);
	free_list(*a);
	free_list(*b);
	free_after_split(arguman);
}

int	check_and_print_error(int arg_count, char **arguman)
{
	if (arg_count <= 2 || !check_arguments(arguman))
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}

void	free_list(t_list *list)
{
	t_list	*temp;

	while (list != NULL)
	{
		temp = list;
		list = list -> next;
		free(temp);
	}
}
