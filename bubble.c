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

void	repcheck(int *sorted, int size)
{
	int	num;
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while(i < size)
	{
		num = sorted[i];
		count = 0;
		while(j < size)
		{
			if (num == sorted[j])
				count++;
			if (count > 1)
			{
				ft_putstr("Numbers cannot repeat.\n");
				exit(1);
			}
			j++;	
		}
		i++;
	}
}
