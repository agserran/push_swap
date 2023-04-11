/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:56:49 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 18:13:55 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack_a)
{
	int	aux;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	aux = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = aux;
	write(1, "sa\n", 3);
}

void	ra(t_list **stack_a)
{
	t_list	*aux1;
	t_list	*aux2;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	aux1 = (*stack_a)->next;
	aux2 = (*stack_a);
	while (aux2->next != NULL)
		aux2 = aux2->next;
	aux2->next = (*stack_a);
	(*stack_a)->next = NULL;
	(*stack_a) = aux1;
	write(1, "ra\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b, t_things *aux)
{
	t_list	*temp;

	if (*stack_b == NULL)
		return ;
	temp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	temp->next = (*stack_a);
	(*stack_a) = temp;
	aux->size_a++;
	aux->size_b--;
	write(1, "pa\n", 3);
}

void	rra(t_list **stack_a)
{
	t_list	*aux1;
	t_list	*aux2;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	aux2 = (*stack_a);
	while (aux2->next != NULL)
	{
		aux1 = aux2;
		aux2 = aux2->next;
	}
	aux1->next = NULL;
	aux2->next = (*stack_a);
	(*stack_a) = aux2;
	write(1, "rra\n", 4);
}
