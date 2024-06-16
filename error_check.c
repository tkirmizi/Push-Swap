/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:22:08 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/06/14 14:00:04 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arguments(char **arguman)
{
	if (is_same(arguman))
		return (0);
	if (!is_all_int(arguman))
		return (0);
	return (1);
}

int	is_same(char **arguman)
{
	int	i;
	int	j;

	i = 0;
	while (arguman[i] != NULL)
	{
		j = i + 1;
		while (arguman[j] != NULL)
		{
			if (!ft_strcmp(arguman[i], arguman[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_all_int(char **arguman)
{
	int	i;
	int	num;

	i = 0;
	while (arguman[i] != NULL)
	{
		if (!is_integer(arguman[i]))
			return (0);
		num = ft_atoi(arguman[i]);
		if (num < -2147483648 || num > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

int	is_integer(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
