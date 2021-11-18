#include "libft.h"
#include "test_libft.h"


int strsub_basic()
{
	char *str = "Hello blob";
	unsigned int start = 6;
	size_t	len = 4;
	char *sub = ft_strsub(str, start, len);
	return (!strcmp(sub, "blob"));
}

int strsub_test_start_bigger_than_strlens()
{
	char *str = "abcg";

	unsigned int start = 7;
	size_t	len = 4;
	
	char *result = ft_strsub(str, start, len);
	if (!strncmp(result, "", 1)) 
	{	
		free(result);
		return (1);
	}
	return (0);
}

int strsub_fullstr(void) 
{
	char	*s = "Let's check full str";
	size_t	size = strlen(s);
	char	*result = ft_strsub(s, 0, size);
	return (!strcmp(s, result));
}

void ft_strsub_test()
{
	TEST_RESULT(strsub_basic());
	TEST_RESULT(strsub_test_start_bigger_than_strlens());
	TEST_RESULT(strsub_fullstr());
}