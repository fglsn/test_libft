#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

void ft_del(void *value, size_t size)
{
	free(value);
	size = 0;
}

int lstdelone_basic()
{
	t_list *new = ft_lstnew(STR, 31);
	ft_lstdelone(&new, ft_del);
	if (new == NULL)
	{
		return (1);
	}
	return (0);
}

void ft_lstdelone_test()
{
	TEST_RESULT(lstdelone_basic());
}