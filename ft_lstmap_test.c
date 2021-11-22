#include "libft.h"
#include "test_libft.h"

#define	STR		"Added node. 1"
#define	STR2	"Added node. 2"
#define	STR3	"Added node. 3"

t_list *to_upper_list(t_list *elem)
{
	t_list *new = ft_lstnew(elem->content, elem->content_size);
	char *str = new->content;
	while(*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	printf("%s\n", new->content);
	return (new);
}

void ft_lstmap_test(void)
{
	t_list *lst = ft_lstnew(STR, 15);
	ft_lstadd(&lst, ft_lstnew(STR2, 15));
	ft_lstadd(&lst, ft_lstnew(STR3, 15));
	ft_lstmap(lst, to_upper_list);
}
