#include "libft.h"
#include <ctype.h>
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int tolower_basic()
{
	char a = ft_tolower('A');
	char b = tolower('A');
	return(a == b);
}

int tolower_basic_2()
{
	char a = ft_tolower('a');
	char b = tolower('a');
	return(a == b);
}

int tolower_non_alpha()
{
	char a = ft_tolower('1');
	char b = tolower('1');
	return(a == b);
}

void ft_tolower_test()
{
	TEST_RESULT(tolower_basic());
	TEST_RESULT(tolower_basic_2());
	TEST_RESULT(tolower_non_alpha());
}