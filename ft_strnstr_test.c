#include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Provide teo strings.\n");
		return (1);
	}
	char *s1 = argv[1];
	char *s2 = argv[2];
	char *s3 = argv[1];
	char *s4 = argv[2];
	int	n = atoi(argv[3]);
	printf("%s\n", ft_strnstr(s1, s2, n));
	printf("%s\n", strnstr(s3, s4, n));
	return (0);
}

