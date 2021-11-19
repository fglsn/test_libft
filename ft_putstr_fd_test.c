#include "libft.h"
#include "test_libft.h"

void ft_putstr_fd_test()
{
	ft_putstr_fd("Hello", 1);
	printf("\n");
	ft_putstr_fd(" ", 1);
	printf("\n");
	ft_putstr_fd("World", 1);
	printf("\n");
}