#include "libft.h"
#include <stdio.h>

void	ft_putstring(char *s)
{
	printf("%c\n", *s);
}


void ft_striter_test(void)
{
	char str[] = "Test striter";
	ft_striter(str, &ft_putstring);

}

void null_check(void)
{
	ft_striter("sdss", NULL);
}
int main(void)
{
	ft_striter_test();
	null_check();
}