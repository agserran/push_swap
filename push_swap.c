#include "push_swap.h"

char **joiner(int argc, char **argv)
{
	int	i;
	char	*aux;
	char	**splited;

	i = 1;
	aux = ft_calloc(1,1);
	while(i < argc)
	{
		aux = ft_strjoin(aux, argv[i]);
		aux = ft_strjoin(aux, " ");
		i++;
	}
	splited = ft_split(aux, ' ');
	return (splited);
}

void	numcheck(int argc, char **argv)
{
	char	**aux;
	int	y;
	int	x;

	y = 0;
	x = 0;
	aux = joiner(argc, argv);
	while(aux[y] != NULL)
	{
		while(aux[y][x] != '\0')
		{
			if(ft_isdigit(aux[y][x]) == 0)
					{
						ft_putstr("Argument must be only numbers\n");
						exit (1);
					}
			x++;
		}
		y++;
	}
}

int main(int argc, char **argv)
{
	numcheck(argc, argv);
	return 0;
}
