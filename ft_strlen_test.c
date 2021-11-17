#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

int strlen_basic()
{
	char *str = STR;
	return (strlen(str) == ft_strlen(str));
}

int strlen_empty_str()
{
	char *str = "";
	return (strlen(str) == ft_strlen(str));
}

int strlen_unicode()
{
	char *str = "Привет";
	return (strlen(str) == ft_strlen(str));
}

int strlen_terminator()
{
	char *str = "Str \0 ing";
	return (strlen(str) == ft_strlen(str));
}

void ft_strlen_test()
{
	TEST_RESULT(strlen_basic());
	TEST_RESULT(strlen_empty_str());
	TEST_RESULT(strlen_unicode());
	TEST_RESULT(strlen_terminator());
}