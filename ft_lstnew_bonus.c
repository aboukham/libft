#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nelm;

	if (!(nelm = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	nelm->content = content;
	nelm->next = NULL;
	return (nelm);
}
