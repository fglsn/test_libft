#include "libft.h"
#include "test_libft.h"

#define	STR		"Some kinda string for testing."
#define	STR2	"Some kinda string FOR testing."

int memcmp_basic_identic()
{
	char *str1 = STR;
	char *str2 = STR;

	int res = ft_memcmp(str1, str2, strlen(str1));
	int res_orig = memcmp(str1, str2, strlen(str2));
	return (res == res_orig);
}

int memcmp_basic_non_identic()
{
	char *str1 = STR;
	char *str2 = STR2;

	int res = ft_memcmp(str1, str2, 30);
	int res_orig = memcmp(str1, str2, 30);
	return (res == res_orig);
}

int memcmp_basic_non_identic2()
{
	char *str1 = STR;
	char *str2 = "Some kinda string FOR testing";

	int res = ft_memcmp(str1, str2, 10);
	int res_orig = memcmp(str1, str2, 10);
	return (res == res_orig);
}

int memcmp_n_zero()
{
	char *str1 = STR;
	char *str2 = STR2;

	int res = ft_memcmp(str1, str2, 0);
	int res_orig = memcmp(str1, str2, 0);
	return (res == res_orig);
}

int memcmp_unsigned()
{
	char *str1 = "\200";
	char *str2 = "\0";

	int res = ft_memcmp(str1, str2, 1);
	int res_orig = memcmp(str1, str2, 1);
	// printf("-%d-\n+%d+\n", res, res_orig);
	return (res == res_orig);
}

int memcmp_terminator()
{
	char *str1 = "Hello \0\0\0\0\0\0";
	char *str2 = "Hello \0WORLD";

	int res = ft_memcmp(str1, str2, 12);
	int res_orig = memcmp(str1, str2, 12);
	// printf("-%d-\n+%d+\n", res, res_orig);
	return (res == res_orig);
}

void ft_memcmp_test()
{
	TEST_RESULT(memcmp_basic_identic());
	TEST_RESULT(memcmp_basic_non_identic());
	TEST_RESULT(memcmp_basic_non_identic2());
	TEST_RESULT(memcmp_n_zero());
	TEST_RESULT(memcmp_unsigned());
	TEST_RESULT(memcmp_terminator());
}