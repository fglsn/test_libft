#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Provide an argument\n");
		return (1);
	}
	printf("%zu\n", ft_strlen(argv[1]));
	printf("%zu\n", strlen(argv[1]));
	return (0);
}