
#include "test_libft.h"
#include "libft.h"

int isdigit_digit()
{
	char c = '5';
	if (ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

int isdigit_nondigit()
{
	char c = '\n';
	if (!ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

void ft_isdigit_test()
{
	TEST_RESULT(isdigit_digit());
	TEST_RESULT(isdigit_nondigit());
}