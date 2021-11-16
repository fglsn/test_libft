#include "libft.h"
#include <stdio.h>
#include <malloc/malloc.h>


void test_mem(void)
{
	free(ft_strnew(5));
	printf("OK!\n");
}

void test_terminator(void)
{
	size_t size = 42;
	char *result = ft_strnew(size);
	while (size > 0)
	{
		if (*result++ != 0)
		{
			printf("Function doesnt allocate 0s into mem\n");
		}
		size--;
	}
	printf("Memory filled with 0s\n");
}

int main(void)
{
	test_mem();
	test_terminator();
}
