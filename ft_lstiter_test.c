#include "libft.h"
#include "test_libft.h"

#define	STR	"First added node."
#define	STR2	"Second added node."
#define	STR3	"Third added node."

void print_list(t_list *element)
{
	printf("%s\n", element->content);
}

void lstiter_basic()
{
	t_list *lst = ft_lstnew(STR, 18);
	ft_lstadd(&lst, ft_lstnew(STR2, 19));
	ft_lstadd(&lst, ft_lstnew(STR3, 18));
	ft_lstiter(lst, print_list);
}

void ft_lstiter_test()
{
	lstiter_basic();
}