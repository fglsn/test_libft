
#include "test_libft.h"
#include "libft.h"

int isalpha_alpha()
{
	char c = 'F';
	if (ft_isalpha(c))
	{
		return (1);
	}
	return (0);
}

int isalpha_nonalpha()
{
	char c = '\n';
	if (!ft_isalpha(c))
	{
		return (1);
	}
	return (0);
}

void ft_isalpha_test()
{
	TEST_RESULT(isalpha_alpha());
	TEST_RESULT(isalpha_nonalpha());
}