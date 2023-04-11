/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:56:41 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 18:06:02 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	aux = *lst;
	while (aux->next)
	{
		aux = aux->next;
	}
	aux->next = new;
}

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*create_stack_a(int size, int *arr, t_list *stack_a)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(arr[i]));
		i++;
	}
	free(arr);
	return (stack_a);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (i);
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_print_lst(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", (int)lst->content);
		lst = lst->next;
	}
}
