/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:13:38 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 14:19:39 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include "Libft/printf/ft_printf.h"
# include <stdlib.h>

typedef struct l_list
{
	int				data;
	int				position;
	int				above;
	int				est_amount;
	int				target;
	struct l_list	*previous;
	struct l_list	*next;
}	t_list;

t_list	*node_creator(int data);
char	**arguman_return(char **argv, int arg_count);
int		check_and_print_error(int arg_count, char **arguman);
void	process_arguments(t_list **a, t_list **b,
			int arg_count, char **arguman);
void	stack_a(t_list **head, int argc, char **argv);
void	sa(t_list	**head);
void	sa_2(t_list	**head);
void	sb(t_list	**head);
void	sb_2(t_list	**head);
void	ss(t_list	**a, t_list	**b);
void	ra(t_list **head);
void	ra_2(t_list **head);
void	rb(t_list **head);
void	rb_2(t_list **head);
void	rr(t_list **a, t_list **b);
void	rra(t_list	**head);
void	rra_2(t_list **head);
void	rrb(t_list **head);
void	rrb_2(t_list **head);
void	rrr(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	push_and_position(t_list **a, t_list **b, int argc);
void	send_b(t_list **a, t_list **b, int argc);
void	sort_a(t_list **a);
void	set_position(t_list **head);
void	set_position_rev(t_list **last, int i);
void	b_first_position(t_list **head);
int		count_args(char **argv);
void	all_sort(t_list **a, t_list **b);
int		find_target(t_list **a, int data);
void	est_amount(t_list **a, t_list **b);
void	sort_it(t_list **a, t_list **b);
int		find_min_cost(t_list **a, t_list **b);
void	process(t_list **a, t_list **b, t_list *temp_a, t_list *temp_b);
void	process_2(t_list **a, t_list **b, t_list *temp_a, t_list *temp_b);
void	smallest_to_top(t_list **a);
int		check_arguments(char **arguman);
int		is_same(char **arguman);
int		is_all_int(char **arguman);
int		is_integer(const char *str);
int		ft_strcmp(char *s1, char *s2);
void	free_after_split(char **ptr);
void	free_list(t_list *list);
void	node_write(t_list **head);

#endif