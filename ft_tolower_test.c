#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%c\n", ft_tolower('G'));
	printf("%c\n", ft_tolower('7'));
	printf("%d\n", ft_tolower(1079));
	printf("%d\n", ft_tolower('/'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('K'));
	printf("\n");
	printf("%c\n", tolower('g'));
	printf("%c\n", tolower('7'));
	printf("%d\n", tolower(1079));
	printf("%d\n", tolower('/'));
	printf("%c\n", tolower('A'));
	printf("%c\n", tolower('z'));
	printf("%c\n", tolower('K'));
	return (0);
}