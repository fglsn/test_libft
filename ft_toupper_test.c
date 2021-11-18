#include "libft.h"
#include <ctype.h>
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int toupper_basic()
{
	char a = ft_toupper('A');
	char b = toupper('A');
	return(a == b);
}

int toupper_basic_2()
{
	char a = ft_toupper('z');
	char b = toupper('z');
	return(a == b);
}

int toupper_non_alpha()
{
	char a = ft_toupper('1');
	char b = toupper('1');
	return(a == b);
}

void ft_toupper_test()
{
	TEST_RESULT(toupper_basic());
	TEST_RESULT(toupper_basic_2());
	TEST_RESULT(toupper_non_alpha());
}