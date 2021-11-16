#include "libft.h"
#include "test_libft.h"
#include <stdio.h>

int bzero_all_zeroes(void)
{
	char test[] = "TEST TEST TEST";
	size_t n = 15;
	int i = 0;

	ft_bzero(test, n);
	while (n > 0)
	{
		if (test[i] != 0)
		{
			printf("Some none-zero bytes found after your bzero function.\n");
			return (0);
		}
		n--;
		i++;
	}
	return (1);
}

void ft_bzero_test()
{
	TEST_RESULT(bzero_all_zeroes());
}