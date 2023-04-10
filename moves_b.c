#include "push_swap.h"

void    sb(t_list **stack_b)
{
    int  aux;

    if (*stack_b == NULL || (*stack_b)->next == NULL)
        return ;
    aux = (*stack_b)->content;
    (*stack_b)->content = (*stack_b)->next->content;
    (*stack_b)->next->content = aux;
    write(1, "sb\n", 3);
}

void    rb(t_list **stack_b)
{
    t_list  *aux1;
    t_list  *aux2;

    if (*stack_b == NULL || (*stack_b)->next == NULL)
        return ;
    aux1 = (*stack_b)->next;
    aux2 = (*stack_b);
    while(aux2->next != NULL)
        aux2 = aux2->next;
    aux2->next = (*stack_b);
    (*stack_b)->next = NULL;
    (*stack_b) = aux1;
    write(1, "rb\n", 3);
}

void    pb(t_list **stack_a, t_list **stack_b, t_things *aux)
{
    t_list  *temp;

    if(*stack_a == NULL)
        return ;
    temp = (*stack_a);
    (*stack_a) = (*stack_a)->next;
    temp->next = (*stack_b);
    (*stack_b) = temp;
    aux->size_a--;
    aux->size_b++;
    write(1, "pb\n", 3);
}

void    rrb(t_list **stack_b)
{
    t_list  *aux1;
    t_list  *aux2;

    if (*stack_b == NULL || (*stack_b)->next == NULL)
        return ;
    aux2 = (*stack_b);
    while(aux2->next != NULL)
    {
        aux1 = aux2;
        aux2 = aux2->next;
    }
    aux1->next = NULL;
    aux2->next = (*stack_b);
    (*stack_b) = aux2;
    write(1, "rrb\n", 4);
}