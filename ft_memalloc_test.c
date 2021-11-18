#include "libft.h"
#include <stdio.h>
#include "test_libft.h"

int	memalloc_zeroes()
{
	size_t	size = 42;
	char	*new_mem;
	new_mem = ft_memalloc(size);
	if (!new_mem)
	{
		printf("NULL returned");
		return (0);
	}
	size_t i = 0;
	while (i < size)
	{
		if (new_mem[i] != 0)
		{
			printf("Memory is not initialized to 0\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int memalloc_free()
{
	free(ft_memalloc(15));
	return (1);
}

void ft_memalloc_test()
{
	TEST_RESULT(memalloc_zeroes());
	TEST_RESULT(memalloc_free());
}
