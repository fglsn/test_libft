#include "libft.h"
#include <stdio.h>

void	memdel_test(void)
{
	void *mem = ft_memalloc(5);

	ft_memdel(&mem);
	if (mem == NULL)
	{
		printf("OK\n");
		return ;
	}
	printf("KO!\n");
}

void null_test(void)
{
	ft_memdel(NULL);
}


int main(void)
{
	memdel_test();
	null_test();
	return (0);
}
