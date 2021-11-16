#include "libft.h"
#include <stdio.h>

void strclr_test(void)
{
	char str[] = "Test string\n";
	char comp[13];

	memset(comp, '\0', 12);
	ft_strclr(str);
	if (str[0] == '\0')
	{
		printf("OK\n");
	}
	if (!memcmp(str, comp, 12))
	{
		printf("OK, zeroed\n");
	}
}

void null_check(void)
{
	ft_strclr(NULL);
}

int main(void)
{
	strclr_test();
	null_check();
}