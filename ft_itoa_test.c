#include "libft.h"
#include "test_libft.h"

int itoa_basic()
{
	char *str = ft_itoa(42);
	char *comp = "42";
	return (!strcmp(str, comp));
}

int itoa_negative()
{
	char *str = ft_itoa(-42);
	char *comp = "-42";
	return (!strcmp(str, comp));
}

int itoa_plus()
{
	char *str = ft_itoa(+42);
	char *comp = "42";
	return (!strcmp(str, comp));
}

int itoa_int_max()
{
	char *str = ft_itoa(2147483647);
	char *comp = "2147483647";
	return (!strcmp(str, comp));
}

int itoa_int_min()
{
	char *str = ft_itoa(-2147483648);
	char *comp = "-2147483648";
	return (!strcmp(str, comp));
}

int itoa_terminator()
{
	char *str = ft_itoa(-2147483648);
	return (str[strlen(str)] == '\0');
}

void ft_itoa_test()
{
	TEST_RESULT(itoa_basic());
	TEST_RESULT(itoa_negative());
	TEST_RESULT(itoa_plus());
	TEST_RESULT(itoa_int_max());
	TEST_RESULT(itoa_int_min());
	TEST_RESULT(itoa_terminator());
}