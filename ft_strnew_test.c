#include "libft.h"
#include "test_libft.h"

int strnew_basic()
{
	free(ft_strnew(5));
	return (1);
}

int strnew_zeroes()
{
	size_t size = 42;
	char *result = ft_strnew(size);
	while (size > 0)
	{
		if (*result++ != 0)
		{
			printf("Function doesnt initialize mem to 0s\n");
			return (0);
		}
		size--;
	}
	return (1);
}

void ft_strnew_test()
{
	TEST_RESULT(strnew_basic());
	TEST_RESULT(strnew_zeroes());
}
