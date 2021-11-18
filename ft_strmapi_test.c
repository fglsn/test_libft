#include "libft.h"
#include <stdio.h>

char	ft_putstring_3(unsigned int i, char c)
{
	if ((i % 1) == 0)
		return(ft_toupper(c));
	else
		return(ft_tolower(c));
}

void ft_strmapi_test(void)
{
	char str[] = "hello world";

	char *new = ft_strmapi(str, ft_putstring_3);
	printf("%s\n", new);
}
