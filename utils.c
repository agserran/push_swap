/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:57:49 by agserran          #+#    #+#             */
/*   Updated: 2023/04/11 18:35:01 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	strc(const char *s, char c)
{
	int		i;
	int		cstr;

	i = 0;
	cstr = 0;
	if (s[i] == c)
		cstr--;
	if (!c)
		cstr++;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			cstr++;
		i++;
	}
	return (cstr);
}

static char	*mr(const char *s, char c)
{
	int		i;
	char	*memory;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	memory = (char *)ft_calloc(i + 1, sizeof(char));
	if (!memory)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
	{
		memory[i] = s[i];
		i++;
	}
	return (memory);
}

char	**ft_split(char const *s, char c)
{
	int		co;
	int		st;
	char	**memory;

	co = 0;
	if (!s)
		return (NULL);
	st = strc(s, c);
	memory = (char **)ft_calloc(st + 1, sizeof(char *));
	if (!memory)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			memory[co] = mr(s, c);
			co++;
			while (*s && *s != c)
				s++;
		}
	}
	return (memory);
}

void	ft_putstr(char *s)
{
	write(2, s, ft_strlen(s));
}
