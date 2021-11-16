#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{	
	char *str;
	char *copy;
	if (argc < 1)
	{
		printf("Provide an argument string");
		return (1);
	}
	str = argv[1];
	copy = ft_strdup(str);
	printf("%s\n%s\n", str, copy);
	return (0);
}