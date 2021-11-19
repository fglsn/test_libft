#include "libft.h"
#include "test_libft.h"

void ft_putchar_fd_test()
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd(98, 1);
	ft_putchar_fd(99, 1);
	ft_putchar_fd(49, 1);
	ft_putchar_fd('\n', 1);
}