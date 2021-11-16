#include "libft.h"
#include "test_libft.h"
#include <stdio.h>

int memset_basic(void)
{
	char test[] = "TEST";
	char test1[] = "TEST";
	const int size = 5;

	if (memcmp(memset(test, 'A', size), ft_memset(test1, 'A', size), size) == 0)
	{
		return (1);
	}
	return (0);
}

int memset_unsigned(void)
{
	char test[] = "TEST";
	char test1[] = "TEST";
	const int size = 5;

	if (memcmp(memset(test, '\200', size), ft_memset(test1, '\200', size), size) == 0)
	{
		return (1);
	}
	return (0);
}

// int memset_null(void)
// {
// 	const int size = 42;
// 	ft_memset(NULL, 'A', size);
// 	printf("Should've segfault! Not OK\n");
// 	return (0);
// }

void	ft_memset_test()
{
	TEST_RESULT(memset_basic());
	TEST_RESULT(memset_unsigned());
	//TEST_RESULT(test_memset_null);
}