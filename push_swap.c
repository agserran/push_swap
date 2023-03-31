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

int	nr(char **splited)
{
	int	i;

	i = 0;
	while(splited[i])
		i++;
	return (i);
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

int	*toint(char **splited, int size)
{
	int	*stored;
	int	i;

	i = 0;
	stored = ft_calloc(sizeof(int), size);
	while(i < size)
	{
		stored[i] = ft_atoi(splited[i]);
		i++;
	}
	return (stored);
}

int     main(int argc, char **argv)
{
	char	**aux = joiner(argc, argv);
	int	size = nr(aux);
	int	*b = toint(aux, size);
	int	*c = bubble(b, size);
	/*sorter(toint(aux, size), bubble(b, size), size);*/
	repcheck(c, size);
        return 0;
}

