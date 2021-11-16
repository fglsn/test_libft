#include "test_libft.h"
#include "libft.h"

int	ft_isascii_non_ascii()
{
	if (!ft_isascii('0x80'))
	{
		return (1);
	}
	return (0);
}

int	ft_isascii_ascii()
{
	char c = '\n';
	if (ft_isascii(c))
	{
		return (1);
	}
	return (0);
}


void ft_isascii_test(void)
{
	TEST_RESULT(ft_isascii_ascii());
	TEST_RESULT(ft_isascii_non_ascii());
}