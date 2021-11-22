#include "libft.h"
#include "test_libft.h"

#define	STR		"First node."
#define	STR2	"Second node."
#define	STR3	"Third node."


void ft_del2(void *value, size_t size)
{
	printf("Deleting a node..\nValue %s\n", (char *) value);
	size = 0;
}

int lstdel_basic()
{
	t_list *new = ft_lstnew(STR, 12);
	new->next = ft_lstnew(STR2, 13);
	new->next->next = ft_lstnew(STR3, 12);
	ft_lstdel(&new, ft_del2);
	if (new == NULL)
	{
		return (1);
	}
	return (0);
}

void ft_lstdel_test()
{
	TEST_RESULT(lstdel_basic());
}