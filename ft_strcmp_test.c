#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int strcmp_equal()
{
	char *str = STR;
	char *str2 = STR;

	int i = strcmp(str, str2);
	int j = ft_strcmp(str, str2);
	return (i == j);
}

int strcmp_not_equal()
{
	char *str = DST;
	char *str2 = STR;

	int i = strcmp(str, str2);
	int j = ft_strcmp(str, str2);
	return (i == j);
}

int strcmp_basic()
{
	char *str = "ABCDE";
	char *str2 = "ABCDe";

	int i = strcmp(str, str2);
	int j = ft_strcmp(str, str2);
	return (i == j);
}

int strcmp_basic_2()
{
	char *str = "ABCDEf";
	char *str2 = "ABCDEf";

	int i = strcmp(str, str2);
	int j = ft_strcmp(str, str2);
	return (i == j);
}

int strcmp_empty()
{
	char *str = "";
	char *str2 = "";
	int i = strcmp(str, str2);
	int j = ft_strcmp(str, str2);
	return (i == j);
}

void ft_strcmp_test()
{
	TEST_RESULT(strcmp_equal());
	TEST_RESULT(strcmp_not_equal());
	TEST_RESULT(strcmp_basic());
	TEST_RESULT(strcmp_basic_2());
	TEST_RESULT(strcmp_empty());
}