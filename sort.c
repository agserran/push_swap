#include "push_swap.h"

void    sort3(t_list **stack_a)
{
    if((locate_num(*stack_a, find_min(*stack_a)) == 1) && ((locate_num(*stack_a, find_max(*stack_a)) == 2)))
        sa(stack_a);
    if((locate_num(*stack_a, find_min(*stack_a)) == 2) && ((locate_num(*stack_a, find_max(*stack_a)) == 0)))
        {
            sa(stack_a);
            rra(stack_a);
        }
    if((locate_num(*stack_a, find_min(*stack_a)) == 1) && ((locate_num(*stack_a, find_max(*stack_a)) == 0)))
        ra(stack_a);
    if((locate_num(*stack_a, find_min(*stack_a)) == 0) && ((locate_num(*stack_a, find_max(*stack_a)) == 1)))
        {
            sa(stack_a);
            ra(stack_a);
        }
    if((locate_num(*stack_a, find_min(*stack_a)) == 2) && ((locate_num(*stack_a, find_max(*stack_a)) == 1)))
        rra(stack_a);
}

void    sort5(t_list **stack_a, t_list **stack_b, t_things *aux)
{
    aux->size_a = ft_lstsize(*stack_a);
    while(aux->size_a > 3)
    {
        while(locate_num(*stack_a, find_min(*stack_a)) != 0)
            ra(stack_a);
        pb(stack_a, stack_b, aux);
    }
    sort3(stack_a);
    while(aux->size_b > 0)
        pa(stack_a, stack_b, aux);
}

int max_bits(t_list *stack)
{
    int nbr_bits;
    int max;

    nbr_bits = 0;
    max = ft_lstsize(stack) - 1;
    while((max >> nbr_bits) != 0)
        nbr_bits++;
    return(nbr_bits);
}

void    radix(t_list **stack_a, t_list **stack_b, t_things *aux)
{
    int i;
    int j;
    int num;
    aux->size= ft_lstsize(*stack_a);

    i = -1;
    while (++i < max_bits(*stack_a))
    {
        j = -1;
        while(++j < aux->size)
        {
            num = (*stack_a)->content;

            if((num >> i & 1) == 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b, aux);
        }
        while(ft_lstsize(*stack_b) != 0)
            pa(stack_a, stack_b, aux);
    }
 }