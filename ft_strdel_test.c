#include "libft.h"
#include <stdio.h>

void	strdel_test(void)
{
	char *mem = ft_memalloc(15);

	memset(mem, 'A', 15);

	size_t i = 0;
	while (i < 15)
	{
		printf("%c", mem[i]);
		i++;
	}
	printf("\n");
	char **ptr = &mem;
	ft_strdel(ptr);
	if (mem == NULL)
	{
		printf("OK\n");
		return ;
	}
	printf("KO!\n");
}

void null_test(void)
{
	ft_strdel(NULL);
}

int main(void)
{
	strdel_test();
	null_test();
	return (0);
}
