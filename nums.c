#include "push_swap.h"

int find_min(t_list *stack)
{
    int aux;

    aux = stack->content;
    while(stack->next != NULL)
    {
        if(aux > stack->next->content)
            aux = stack->next->content;
        stack = stack->next;
    }
    return(aux);
}

int find_max(t_list *stack)
{
    int aux;

    aux = stack->content;
    while(stack->next != NULL)
    {
        if(aux < stack->next->content)
            aux = stack->next->content;
        stack = stack->next;
    }
    return(aux);
}

int locate_num(t_list *stack, int num)
{
    int i;

    i = 0;
    while(stack->next != NULL)
    {
        if(stack->content == num)
            return(i);
        stack = stack->next;
        i++;
    }
    return(-1);
}