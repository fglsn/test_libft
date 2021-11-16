#include "test_libft.h"
#include "libft.h"

int isprint_printable()
{
	char c = 'F';
	if (ft_isprint(c))
	{
		return (1);
	}
	return (0);
}

void ft_isprint_test(void)
{
	TEST_RESULT(isprint_printable());
}