/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nums.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:57:01 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 18:17:46 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list *stack)
{
	int	aux;

	aux = stack->content;
	while (stack->next != NULL)
	{
		if (aux > stack->next->content)
			aux = stack->next->content;
		stack = stack->next;
	}
	return (aux);
}

int	find_max(t_list *stack)
{
	int	aux;

	aux = stack->content;
	while (stack->next != NULL)
	{
		if (aux < stack->next->content)
			aux = stack->next->content;
		stack = stack->next;
	}
	return (aux);
}

int	locate_num(t_list *stack, int num)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		if (stack->content == num)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}

int	already_done(t_list *stack)
{
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
