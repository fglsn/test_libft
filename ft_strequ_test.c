#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int strequ_equal()
{
	char *str = STR;
	char *str2 = STR;

	return (ft_strequ(str, str2));
}

int strequ_not_equal()
{
	char *str = DST;
	char *str2 = STR;

	return (!ft_strequ(str, str2));
}

int strequ_basic()
{
	char *str = "ABCDE";
	char *str2 = "ABCDe";

	return (!ft_strequ(str, str2));
}

int strequ_basic_2()
{
	char *str = "ABCDEf";
	char *str2 = "ABCDEf";

	return (ft_strequ(str, str2));
}

int strequ_empty()
{
	char *str = "";
	char *str2 = "";
	return (ft_strequ(str, str2));
}

void ft_strequ_test()
{
	TEST_RESULT(strequ_equal());
	TEST_RESULT(strequ_not_equal());
	TEST_RESULT(strequ_basic());
	TEST_RESULT(strequ_basic_2());
	TEST_RESULT(strequ_empty());
}