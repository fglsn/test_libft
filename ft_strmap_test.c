#include "libft.h"
#include <stdio.h>

char to_upper(char c)
{
	if (ft_isalpha(c))
	{
		return (c - 32);
	}
	return (c);
}

void strmap_test(void)
{
	char str[] = "hello world\n";

	char *new = ft_strmap(str, to_upper);
	printf("%s\n", new);
}

void null_check(void)
{
	char str[] = "hello world\n";

	char *new = ft_strmap(str, NULL);
	printf("%s\n", new);
}

int main(void)
{
	strmap_test();
	null_check();
}