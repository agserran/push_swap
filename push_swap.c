/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:57:23 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 19:14:51 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**joiner(int argc, char **argv)
{
	int		i;
	char	*aux;
	char	**splited;

	i = 1;
	aux = ft_calloc(1, 1);
	while (i < argc)
	{
		aux = ft_strjoin(aux, argv[i]);
		aux = ft_strjoin(aux, " ");
		i++;
	}
	splited = ft_split(aux, ' ');
	free(aux);
	return (splited);
}

char	*checkeraux(int argc, char **argv)
{
	int		i;
	char	*aux;

	i = 1;
	aux = ft_calloc(1, 1);
	while (i < argc)
	{
		aux = ft_strjoin(aux, argv[i]);
		aux = ft_strjoin(aux, " ");
		i++;
	}
	return (aux);
}

int	nr(char **splited)
{
	int	i;

	i = 0;
	while (splited[i])
		i++;
	return (i);
}

void	lettercheck(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || ft_isdigit(str[i]) == 1
				|| ((str[i] == '-' || str[i] == '+')
					&& ft_isdigit(str[i + 1]) == 1 && str[i - 1] == ' ')))
			i++;
		else if ((i == 0 && (str[i] == '-' || str[i] == '+'))
			&& ft_isdigit(str[i + 1]) == 1)
			i++;
		else
		{
			ft_putstr("THERE HAS TO BE ONLY NUMBERS.\n");
			exit(1);
		}
	}
	free(str);
}

int	*toint(char **splited, int size)
{
	int	*stored;
	int	i;

	i = 0;
	stored = malloc(sizeof(int) * size);
	while (i < size)
	{
		stored[i] = ft_atoi(splited[i]);
		i++;
	}
	return (stored);
}
