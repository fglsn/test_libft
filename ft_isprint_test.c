#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d\n", ft_isprint('g'));
	printf("%d\n", ft_isprint('5'));
	printf("%d\n", ft_isprint(1079));
	printf("%d\n", ft_isprint('/'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('$'));
	printf("%d\n", ft_isprint(664));
	printf("\n");
	printf("%d\n", isprint('g'));
	printf("%d\n", isprint('5'));
	printf("%d\n", isprint(1079));
	printf("%d\n", isprint('/'));
	printf("%d\n", isprint(' '));
	printf("%d\n", isprint('$'));
	printf("%d\n", isprint(664));
	return (0);
}