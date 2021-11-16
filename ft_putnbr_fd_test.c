#include <stdlib.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Provide an argument\n");
		return (1);
	}
	ft_putnbr_fd(atoi(argv[1]), 2);
	printf("\n");
	return (0);
}