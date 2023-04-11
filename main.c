/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:58:56 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 19:14:23 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list		*stack_a;
	t_list		*stack_b;
	t_things	things;
	t_main		var;

	stack_a = NULL;
	things.size_b = 0;
	var.aux = joiner(argc, argv);
	var.size = nr(var.aux);
	var.b = toint(var.aux, var.size);
	var.x = sorter(toint(var.aux, var.size),
			bubble(var.bubble = toint(var.aux, var.size), var.size), var.size);
	stack_a = create_stack_a(var.size, var.x, stack_a);
	lettercheck(checkeraux(argc, argv));
	num_check(sorter(toint(var.aux, var.size),
			bubble(var.b, var.size), var.size), var.size);
	choose_algorithm(var.size, &stack_a, &stack_b, &things);
	return (0);
}
