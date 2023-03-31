# ifndef PUSH_SWAP_H
 # define PUSH_SWAP_H


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>


char    **ft_split(char const *s, char c);
void	ft_putstr(char *s);
char	*ft_strjoin(char *stash, char *buffer);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t size, size_t count);
int     ft_isdigit(char c);
void	numcheck(int argc, char **argv);
char	**joiner(int argc, char **argv);
int     ft_atoi(const char *str);
int	nr(char **splited);
int	*bubble(int *stack, int	size);

#endif
