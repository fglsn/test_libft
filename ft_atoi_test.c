#include <stdio.h>
#include "test_libft.h"
#include "libft.h"

int atoi_basic()
{
	const char *n = "42";
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

int atoi_basic_negative()
{
	const char *n = "-42";
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

int atoi_plus()
{
	const char *n = "+42";
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

int atoi_zeroes_in_beginning_of_num()
{
	const char *n = "     -00004949";
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

int atoi_chars()
{
	const char *n = "test";
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

int atoi_spaces()
{
	const char *n = "      -42";
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

int atoi_overflow()
{
	const char *n = "11515845246265065471";
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

int atoi_underflow()
{
	const char *n = "-11515845246265065471";
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

int atoi_null()
{
	const char n[42];
	if (atoi(n) == ft_atoi(n))
	{
		return (1);
	}
	return (0);
}

void ft_atoi_test()
{
	TEST_RESULT(atoi_basic());
	TEST_RESULT(atoi_basic_negative());
	TEST_RESULT(atoi_plus());
	TEST_RESULT(atoi_zeroes_in_beginning_of_num());
	TEST_RESULT(atoi_chars());
	TEST_RESULT(atoi_spaces());
	TEST_RESULT(atoi_overflow());
	TEST_RESULT(atoi_underflow());
	TEST_RESULT(atoi_null());
}

// -9223372036854775808
// 9223372036854775807
// -9223372036854775808

// -2147483648

// -9999999999999999999999999 
// 99999999999999999999999999

// 11515845246265065471
// 9223372036854775807

// 21474836496468787683