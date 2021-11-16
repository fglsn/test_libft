#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char *src;
	char *dest;
	char *src1;
	char *dest1;
	if (argc != 3)
	{
		printf("Provide two strings");
		return (1);
	}
	src = argv[1];
	dest = argv[2];
	src1 = argv[1];
	dest1 = argv[2];
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest1, src1));
	return (0);
}