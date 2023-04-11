/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:57:23 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 17:57:25 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include "push_swap.h"

char **joiner(int argc, char **argv)
{
	int	i;
	char	*aux;
	char	**splited;

	i = 1;
	aux = ft_calloc(1,1);
	while(i < argc)
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
	int	i;
	char	*aux;
	char	**splited;

	i = 1;
	aux = ft_calloc(1,1);
	while(i < argc)
	{
		aux = ft_strjoin(aux, argv[i]);
		aux = ft_strjoin(aux, " ");
		i++;
	}
	return(aux);
}
int	nr(char **splited)
{
	int	i;

	i = 0;
	while(splited[i])
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
	stored = malloc(sizeof(int)*size);
	while(i < size)
	{
		stored[i] = ft_atoi(splited[i]);
		i++;
	}
	return (stored);
}

int     main(int argc, char **argv)
{
	t_list		*stack_a;
	t_list		*stack_b;
	t_things	things;

	things.size_b = 0;
	char	**aux = joiner(argc, argv);
	int	size = nr(aux);
	int	*b = toint(aux, size);
	int	*c = bubble(b, size);
	int *x = sorter(toint(aux, size), bubble(b, size), size);
	stack_a = create_stack_a(size, x, stack_a);
	
	char	*prueba = checkeraux(argc, argv);
	lettercheck(prueba);
	num_check(sorter(toint(aux, size), bubble(b, size), size), size);
	choose_algorithm(size, &stack_a, &stack_b, &things);

	system("leaks a.out");
	return 0;
}

