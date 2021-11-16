#include "libft.h"
#include <stdio.h>

void test_bzero(void)
{
	char test[0xF00];
	size_t n = 42;
	int i = 0;

	memset(test, 'Z', 0xF00);

	ft_bzero(test, n);
	while (n > 0)
	{
		if (test[i] != 0)
		{
			printf("KO! Some none-zero bytes found after your bzero function.\n");
			return ;
		}
		n--;
		i++;
	}
	printf("All zeros\n");
}

void test_zero_pram(void)
{
	char test[0xF00];
	char test1[0xF00];

	memset(test, '\x1', sizeof(test));
	memset(test1, '\x1', sizeof(test1));

	ft_bzero(test, 0);
	bzero(test1, (0));
	if (!memcmp(test, test1, 0xF00))
	{
		printf("All ok\n");
		return ;
	}
	printf("Something wrong! Zero call\n");

}

int main(void)
{
	test_bzero();
	test_zero_pram();
}