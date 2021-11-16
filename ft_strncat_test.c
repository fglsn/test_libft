#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	str[22] = "1 2 3 Hello";
	char	str2[] = "World!\n";

	char	str3[22] = "1 2 3 Hello";
	char	str4[] = "World!\n";

	ft_strncat(str, str2, 8);
	ft_strncat(str3, str4, 8);
	printf("%s\n%s\n", str, str3);
	return (0);
}
