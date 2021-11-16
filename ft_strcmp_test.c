#include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Provide two strings.\n");
		return (1);
	}
	char *s1 = argv[1];
	char *s2 = argv[2];
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
