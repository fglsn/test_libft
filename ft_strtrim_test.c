#include "libft.h"
#include "test_libft.h"

#define	STR	" \n \t   Some kinda string for testing.       "
#define	STR_TRIMMED	"Some kinda string for testing."

int strtrim_basic()
{
	char *str = ft_strtrim(STR);
	return (!strcmp(str, STR_TRIMMED));
}

int strtrim_nothing_to_trim()
{
	char *str = ft_strtrim(STR_TRIMMED);
	return (!strcmp(str, STR_TRIMMED));
}

int strtrim_all_spaces()
{
	char *str = ft_strtrim("      \n\n \t     ");
	return (!strcmp(str, ""));
}

int strtrim_empty()
{
	char *str = ft_strtrim("");
	return (!strcmp(str, ""));
}

void ft_strtrim_test()
{
	TEST_RESULT(strtrim_basic());
	TEST_RESULT(strtrim_nothing_to_trim());
	TEST_RESULT(strtrim_all_spaces());
	TEST_RESULT(strtrim_empty());
}