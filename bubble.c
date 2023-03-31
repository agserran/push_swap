#include "push_swap.h"

int	*bubble(int *stack, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while(i < size)
	{
		j = 0;
		while(j < size - 1 - i)
		{
			if(stack[j] > stack[j + 1])
			{
				temp = stack[j];
				stack[j] = stack[j + 1];
				stack[j + 1] = temp;
			}
			j++;
		}
		i++;
	}	
	return(stack);
}

int *sorter(int *stack, int *bubble, int size)
{
    int i;
    int *sorted;
    int j;

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
                break;
            }
            j++;
        }
        i++;
    }
    return (sorted);
}
