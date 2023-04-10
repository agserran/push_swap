# ifndef PUSH_SWAP_H
 # define PUSH_SWAP_H


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}	t_list;

typedef struct s_things
{
    int     size_a;
    int     size_b;
    int     size;
} t_things;

char    **ft_split(char const *s, char c);
void	ft_putstr(char *s);
char	*ft_strjoin(char *stash, char *buffer);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t size, size_t count);
int     ft_isdigit(char c);
void	numcheck(int argc, char **argv);
char	**joiner(int argc, char **argv);
int     ft_atoi(const char *str);
int		nr(char **splited);
int		*bubble(int *stack, int	size);
int		*sorter(int *stack, int*bubble, int size);
void	repcheck(int *sorted, int size);
t_list  *create_stack_a(int size, int *arr, t_list *stack_a);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
void	ft_print_lst(t_list *lst);

void    sa(t_list **stack_a);
void    ra(t_list **stack_a);
void    pa(t_list **stack_a, t_list **stack_b, t_things *aux);
void    rra(t_list **stack_a);
void    sb(t_list **stack_b);
void    rb(t_list **stack_b);
void    pb(t_list **stack_a, t_list **stack_b, t_things *aux);
void    rrb(t_list **stack_b);

int     find_min(t_list *stack);
int     find_max(t_list *stack);
int     locate_num(t_list *stack, int num);

void    sort3(t_list **stack_a);
void    sort5(t_list **stack_a, t_list **stack_b, t_things *aux);
void    radix(t_list **stack_a, t_list **stack_b, t_things *aux);

#endif
