#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int strncmp_equal()
{
	char *str = STR;
	char *str2 = STR;

	int i = strncmp(str, str2, 30);
	int j = ft_strncmp(str, str2, 30);
	return (i == j);
}

int strncmp_not_equal()
{
	char *str = DST;
	char *str2 = STR;

	int i = strncmp(str, str2, 15);
	int j = ft_strncmp(str, str2, 15);
	return (i == j);
}

int strncmp_basic()
{
	char *str = "ABCDE";
	char *str2 = "ABCDe";

	int i = strncmp(str, str2, 4);
	int j = ft_strncmp(str, str2, 4);
	return (i == j);
}

int strncmp_basic_2()
{
	char *str = "ABCDEf";
	char *str2 = "ABCDEf";

	int i = strncmp(str, str2, 5);
	int j = ft_strncmp(str, str2, 5);
	return (i == j);
}

int strncmp_empty()
{
	char *str = "";
	char *str2 = "";
	int i = strncmp(str, str2, 1);
	int j = ft_strncmp(str, str2, 1);
	return (i == j);
}

void ft_strncmp_test()
{
	TEST_RESULT(strncmp_equal());
	TEST_RESULT(strncmp_not_equal());
	TEST_RESULT(strncmp_basic());
	TEST_RESULT(strncmp_basic_2());
	TEST_RESULT(strncmp_empty());
}
