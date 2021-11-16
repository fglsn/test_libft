#include <stdlib.h>
#include <stdio.h>

void	ft_putstr_fd(char const *s, int fd);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Provide an argument");
	}
	ft_putstr_fd(argv[1], 0);
	printf("\n");
	return (0);
}