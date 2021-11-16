#include <stdlib.h>
#include <stdio.h>

void ft_putnbr(int n);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Provide an argument\n");
		return (1);
	}
	ft_putnbr(atoi(argv[1]));
	printf("\n");
	return (0);
}