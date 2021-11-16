#include "test_libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char b = 'b';

	b = toupper(b);
	printf("%c\n", b);
	printf("%c\n", ft_toupper('g'));
	printf("%c\n", ft_toupper('5'));
	printf("%d\n", ft_toupper(1079));
	printf("%d\n", ft_toupper('/'));
	printf("%d\n", ft_toupper(' '));
	printf("%d\n", ft_toupper('$'));
	printf("%d\n", ft_toupper(664));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('p'));
	printf("\n");
	printf("%c\n", toupper('g'));
	printf("%d\n", toupper('5'));
	printf("%d\n", toupper(1079));
	printf("%d\n", toupper('/'));
	printf("%d\n", toupper(' '));
	printf("%d\n", toupper('$'));
	printf("%d\n", toupper(664));
	printf("%c\n", toupper('A'));
	printf("%c\n", toupper('z'));
	printf("%c\n", toupper('p'));
	return (0);
}