#include "libft.h"
#include <stdio.h>

void	memalloc_test(void)
{
	size_t	size = 42;
	char	*new_mem;

	new_mem = ft_memalloc(size);
	if (!new_mem)
	{
		printf("NULL returned");
		return ;
	}
	size_t i = 0;
	while (i < size)
	{
		if (new_mem[i] != 0)
		{
			printf("Memory is not initialized to 0\n");
			return ;
		}
		i++;
	}
	printf("OK! Memoory initialized to 0\n");
}

int main(void)
{
	memalloc_test();
	return (0);
}