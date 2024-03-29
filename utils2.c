/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:57:53 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 18:33:04 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *stash, char *buffer)
{
	char	*str;
	int		i;
	int		j;
	int		total;

	total = ft_strlen(stash) + ft_strlen(buffer);
	str = ft_calloc(sizeof(char), (total + 1));
	if (!str || !stash || !buffer)
		return (NULL);
	i = 0;
	while (stash[i])
	{
		str[i] = stash[i];
		i++;
	}
	j = 0;
	while (buffer[j])
	{
		str[i] = buffer[j];
		i++;
		j++;
	}
	free(stash);
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(size_t size, size_t count)
{
	char	*memory;
	size_t	p;
	size_t	i;

	i = 0;
	p = count * size;
	if ((p < count) || (p < size))
		return (NULL);
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	while (i < count * size)
		memory[i++] = '\0';
	return (memory);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	a;
	int	sign;
	int	num;

	num = 0;
	sign = 0;
	a = 0;
	while (str[a] == '\t' || str[a] == '\n' || str[a] == '\v'
		|| str[a] == '\f' || str[a] == '\r' || str[a] == ' ')
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			sign++;
		a++;
	}
	while (str[a] != '\0' && str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + str[a] - 48;
		a++;
	}
	if (sign % 2 != 0)
		num = num * -1;
	return (num);
}
