#include "libft.h"
#include <stdio.h>

void test_memset(void)
{
	char test[0xF00];
	char test1[0xF00];
	const int size = 42;

	memset(test, 'Z', size);
	memset(test1, 'Z', size);


	memset(test, 'A', size);
	ft_memset(test1, 'A', size);

	if (memcmp(test, test1, 0x00) == 0)
	{
		printf("Memset ok\n");
		return ;
	}
}

void test_memset_unsigned(void) // ??
{
	char test[0xF00];
	char test1[0xF00];
	const int size = 22;

	memset(test, 'Z', size);
	memset(test1, 'Z', size);


	memset(test, '\200', size);
	ft_memset(test1, '\200', size);

	if (memcmp(test, test1, size) == 0)
	{
		printf("Memset ok (unsigned)\n");
		return ;
	}
	printf("Chars are not unsigned\n");
}

void test_memset_null(void)
{
	const int size = 42;
	ft_memset(NULL, 'A', size);
	printf("Should've segfault! Not OK\n");
}

int main(void)
{
	test_memset();
	test_memset_unsigned();
	test_memset_null();
}