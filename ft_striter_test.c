#include "libft.h"
#include <stdio.h>

void	ft_putstring(char *s)
{
	printf("%c\n", *s);
}


void ft_striter_check(void)
{
	char str[] = "Test";
	ft_striter(str, &ft_putstring);

}

void ft_striter_test(void)
{
	ft_striter_check();
}