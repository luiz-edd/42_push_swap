
#include "libft.h"

void	ft_lstadd_back_arr(t_list **lst, void ***content)
{
	int		i;
	void	**cont;

	cont = *content;
	i = 0;
	ft_lstadd_back(lst, ft_lstnew((void *)(cont)));
	while (cont[i] != NULL)
		ft_lstadd_back(lst, ft_lstnew(cont[i++]));
}
