#include "test_libft.h"
#include "libft.h"

int	memdel_basic()
{
	void *mem = ft_memalloc(5);

	ft_memdel(&mem);
	if (mem == NULL)
	{
		return (1);
	}
	return (0);
}

int memdel_check()
{
	void	*memory= malloc(42);
	ft_memdel(&memory);
	if (memory != NULL)
		return (0);
	return (1);
}


void ft_memdel_test()
{
	TEST_RESULT(memdel_basic());
	TEST_RESULT(memdel_check());
}
