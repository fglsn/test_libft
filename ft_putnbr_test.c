#include "libft.h"
#include "test_libft.h"

void ft_putnbr_test()
{
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(-100);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
}