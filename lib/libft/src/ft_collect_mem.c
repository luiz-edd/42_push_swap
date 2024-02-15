

#include "libft.h"

t_list	**ft_get_memory_lst(void)
{
	static t_list	*lst = NULL;

	return (&lst);
}

void	ft_collect_mem(void *content)
{
	ft_lstadd_back(ft_get_memory_lst(), ft_lstnew(content));
}

void	ft_collect_mem_arr(void ***content)
{
	ft_lstadd_back_arr(ft_get_memory_lst(), content);
}

void	ft_free_memory(void)
{
	get_next_line(-1);
	ft_lstclear(ft_get_memory_lst(), &free);
}
