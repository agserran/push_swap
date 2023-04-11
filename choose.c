/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:03:17 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 18:04:32 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	choose_algorithm(int size, t_list **stack_a,
		t_list **stack_b, t_things *aux)
{
	if (size <= 3)
		sort3(stack_a);
	else if (size > 3 && size <= 10)
		sort_max10(stack_a, stack_b, aux);
	else
		radix(stack_a, stack_b, aux);
}
