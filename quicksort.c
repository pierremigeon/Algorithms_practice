#include <string.h>

typedef struct s_node 
{
    int key;
    struct s_node *next;
} t_node;

typedef struct s_info
{
    t_node *pivot;
    t_node *left_list;
    t_node *right_list;
    t_node *current_node;
    t_node *next_node; 
}   t_info;

t_node    *ft_findend(t_node *list)
{
    while (list->next != NULL)
        list = list->next;
    return (list);
}

t_node  *join(t_node *left_list, t_node *pivot, t_node *right_list)
{
  t_node *left_tail;
  pivot->next = right_list;
  if (left_list == NULL)    
    return pivot;
  left_tail = ft_findend(left_list);
  left_tail->next = pivot;
  return (left_list);
}

void  secondsort(t_info **info)
{ 
  if ((*info)->current_node->key <= (*info)->pivot->key)
  {
    (*info)->current_node->next = (*info)->left_list;
    (*info)->left_list = (*info)->current_node;
  }
  else
  {
    (*info)->current_node->next = (*info)->right_list;
    (*info)->right_list = (*info)->current_node;
  }
}

t_node * sort(t_node *list)
{
    t_info *info;
  
    info = (t_info *)malloc(sizeof(t_info));
    if (list == NULL || list->next == NULL) 
      return (list);
    info->pivot = ft_findend(list);
    info->left_list = NULL, 
    info->right_list = NULL;
    info->current_node = list;
    while (info->current_node != NULL)
    {
        info->next_node = info->current_node->next;
        if (info->current_node != info->pivot)
        {
          secondsort(&info);
        }
        info->current_node = info->next_node;
    }
    return join(sort(info->left_list), info->pivot, sort(info->right_list));
}

int        main()
{
    int i;
    t_node *space;
    space = (t_node *)malloc(5 * sizeof(t_node));
    for (i = 0; i < 5; i++)
    {
        (space + i)->key = 2 * ((17 * i) % 5);
        (space + i)->next = space + (i + 1);
    }
    (space + 4)->next = NULL;
    space = sort(space);
    return (0);
}
