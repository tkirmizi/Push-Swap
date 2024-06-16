/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguman_handle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:09:47 by taha              #+#    #+#             */
/*   Updated: 2024/06/14 14:01:59 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_args(char **argv)
{
	char	**temp;
	int		i;
	int		j;
	int		total_args;

	i = 1;
	total_args = 0;
	while (argv[i])
	{
		temp = ft_split(argv[i], ' ');
		j = 0;
		while (temp[j])
		{
			total_args++;
			j++;
		}
		i++;
		free_after_split(temp);
	}
	return (total_args);
}

static void	copy_args(char **argv, char **arguman)
{
	char	**temp;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (argv[i])
	{
		temp = ft_split(argv[i], ' ');
		j = 0;
		while (temp[j])
		{
			arguman[k] = ft_strdup(temp[j]);
			j++;
			k++;
		}
		i++;
		free_after_split(temp);
	}
	arguman[k] = NULL;
}

char	**arguman_return(char **argv, int arg_count)
{
	char	**arguman;

	arguman = (char **)malloc((arg_count + 1) * sizeof(char *));
	if (!arguman)
		return (NULL);
	copy_args(argv, arguman);
	return (arguman);
}

void	free_after_split(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}
