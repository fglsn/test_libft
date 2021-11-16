#include "libft.h"
#include <stdio.h>

char	ft_putstring(unsigned int i, char c)
{
	if ((i % 1) == 0)
		return(ft_toupper(c));
	else
		return(ft_tolower(c));
}

void strmapi_test(void)
{
	char str[] = "hello world teST RRR\n";

	char *new = ft_strmapi(str, ft_putstring);
	printf("%s\n", new);
}

void strmapi_check_null(void)
{
	char	*ret = ft_strmapi(NULL, ft_putstring);
	if (!ret)
	{
		printf("Test OK\n");
		return ;
	}
	printf("Test KO");
	return ;
}

int main(void)
{
	strmapi_test();
	strmapi_check_null();
	return (0);
}