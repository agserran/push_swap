/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:56:34 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 18:03:01 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*bubble(int *stack, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (stack[j] > stack[j + 1])
			{
				temp = stack[j];
				stack[j] = stack[j + 1];
				stack[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (stack);
}

int	*sorter(int *stack, int *bubble, int size)
{
	int	i;
	int	*sorted;
	int	j;

	i = 0;
	sorted = ft_calloc(sizeof(int), size);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (stack[i] == bubble[j])
			{
				sorted[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (sorted);
}

void	back_check(int *array, int num, int i)
{
	i--;
	while (i >= 0)
	{
		if (array[i] == num)
		{
			ft_putstr("NUMBERS CANNOT REPEAT.\n");
			exit(1);
		}
		i--;
	}
}

void	num_check(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		back_check(arr, arr[i], i);
		i++;
	}
	free(arr);
}
