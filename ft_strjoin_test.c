#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int strjoin_basic()
{
	char *str = STR;
	char *str2 = STR;

	char *res = ft_strjoin(str, str2);
	char *comp = "Some kinda string for testing.Some kinda string for testing.";
	return (!strcmp(res, comp));
}

int strjoin_overlap()
{
	char	*str = STR;
	char	*str2 = str + 5;
	char	*res = ft_strjoin(str2, str);
	return (!strcmp(res, "kinda string for testing.Some kinda string for testing."));
}

void ft_strjoin_test()
{
	TEST_RESULT(strjoin_basic());
	TEST_RESULT(strjoin_overlap());
}