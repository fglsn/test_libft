#include "libft.h"
#include "test_libft.h"

int strclr_basic()
{
	char str[] = "Test string\n";
	char comp[13];

	memset(comp, '\0', 12);
	ft_strclr(str);
	if (str[0] == '\0' && !memcmp(str, comp, 12))
	{
		return (1);
	}
	return (0);
}

void ft_strclr_test()
{
	TEST_RESULT(strclr_basic());
}