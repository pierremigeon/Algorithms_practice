
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_node {
	char *name;
	struct s_node* next;
}				t_node;

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(t_node *a, t_node *b)
{
	char *tempc;

	tempc = a->name;
	a->name = b->name;
	b->name = tempc;
}

void	ft_bubblesort(t_node *head)
{
	int swap;
	t_node *current;
	t_node *last; 
	
	swap = 1;
	last = NULL;
	while (swap == 1)
	{
		current = head;
		swap = 0;
		while (current->next)
		{
			if (ft_strcmp(current->name, current->next->name) > 1)
			{
				ft_swap(current, current->next);
				swap = 1;
			}
			current = current->next;
		}
	}
}

char  *gen_random(int len)
{
    char *s;

    s = (char *)malloc(sizeof(char)*len + 1);
    static const char alphanum[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  s[len] = '\0';
  len--;
    while (len >= 0) {
        s[len] = alphanum[rand() % 26];
        len--;
    }
    return (s);
}

int        main()
{
    int i;
    t_node *space;
    space = (t_node *)malloc(5 * sizeof(t_node));
    for (i = 0; i < 5; i++)
    {
		(space + i)->name = gen_random(5);
		(space + i)->next = space + (i + 1);
    }
    (space + 4)->next = NULL;

    ft_bubblesort(space);
    
    while(space != NULL)
    {
       printf("%s\n", space->name);
       space = space->next;
    }
    return (0);
}
