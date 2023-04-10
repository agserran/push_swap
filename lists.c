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

t_list  *create_stack_a(int size, int *arr, t_list *stack_a)
{
    int i;
    
    i = 0;
    while (i < size)
    {
        ft_lstadd_back(&stack_a, ft_lstnew(arr[i]));
        i++;
    }
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