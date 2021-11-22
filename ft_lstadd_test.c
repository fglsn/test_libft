#include "libft.h"
#include "test_libft.h"

#define	STR	"First added node."
#define	STR2	"Second added node."


int lstadd_basic()
{
	t_list *lst = ft_lstnew(STR, 18);
	ft_lstadd(&lst, ft_lstnew(STR2, 19));
	if (!memcmp(lst->content, STR2, 19) && !memcmp(lst->next->content, STR, 18) && lst->next->next == NULL)
		return (1);
	return (0);
}

int lstadd_to_empty()
{
	t_list *lst = NULL;
	ft_lstadd(&lst, ft_lstnew(STR2, 19));
	if (!memcmp(lst->content, STR2, 19) && lst->next == NULL)
		return (1);
	return (0);
}


void ft_lstadd_test()
{
	TEST_RESULT(lstadd_basic());
	TEST_RESULT(lstadd_to_empty());
}