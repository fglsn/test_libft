#include <stdio.h>
#include "test_libft.h"
#include "libft.h"

int isalnum_char()
{
	char ch = 'C';
	if (ft_isalnum(ch))
	{
		return (1);
	}
	return (0);
}

int isalnum_num()
{
	char num = '5';
	if (ft_isalnum(num))
	{
		return (1);
	}
	return (0);
}

int isalnum_nonalnum()
{
	char num = '\n';
	if (!ft_isalnum(num))
	{
		return (1);
	}
	return (0);
}

void ft_isalnum_test()
{
	TEST_RESULT(isalnum_char());
	TEST_RESULT(isalnum_num());
	TEST_RESULT(isalnum_nonalnum());
}