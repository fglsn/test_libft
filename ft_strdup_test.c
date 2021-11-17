#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

int strdup_basic()
{
	char *str = STR;
	char *copy1 = strdup(str);
	char *copy2 = strdup(str);
	return(!strcmp(copy1, copy2));
}

int strdup_empty_string()
{
	char *str = "";
	char *copy = strdup(str);
	return(!strcmp(str, copy));
}

void ft_strdup_test()
{
	TEST_RESULT(strdup_basic());
	TEST_RESULT(strdup_empty_string());
	// TEST_RESULT();
}