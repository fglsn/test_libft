#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

int lstnew_basic()
{
	t_list *new = ft_lstnew(STR, 31);
	if (!memcmp(new->content, STR, 31) && new->content_size == 31)
	{
		return (1);
	}
	return (0);
}

int lstnew_null()
{
	t_list *new = ft_lstnew(NULL, 31);
	if (!memcmp(new->content, NULL, 0) && new->content_size == 0)
	{
		return (1);
	}
	return (0);
}

void ft_lstnew_test()
{
	TEST_RESULT(lstnew_basic());
	TEST_RESULT(lstnew_null());
}