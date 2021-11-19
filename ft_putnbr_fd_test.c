#include "libft.h"
#include "test_libft.h"

void ft_putnbr_fd_test()
{
	ft_putnbr_fd(1, 1);
	printf("\n");
	ft_putnbr_fd(-100, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
}