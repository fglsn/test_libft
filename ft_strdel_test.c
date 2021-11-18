#include "libft.h"
#include "test_libft.h"

int	strdel_basic()
{
	char *mem = ft_memalloc(15);
	memset(mem, 'A', 15);
	ft_strdel(&mem);
	if (mem == NULL)
	{
		return (1);
	}
	return (0);
}

int strdel_check()
{
	char	*memory= malloc(42);
	ft_strdel(&memory);
	if (memory != NULL)
		return (0);
	return (1);
}

void ft_strdel_test()
{
	TEST_RESULT(strdel_basic());
	TEST_RESULT(strdel_check());
}
