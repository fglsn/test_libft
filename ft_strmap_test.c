#include "libft.h"
#include "test_libft.h"

char to_upper(char c)
{
	if (ft_isalpha(c))
	{
		return (c - 32);
	}
	return (c);
}

void ft_strmap_test(void)
{
	char str[] = "hello world";

	char *new = ft_strmap(str, to_upper);
	printf("%s\n", new);
}
