#include "libft.h"
#include <stdio.h>

void strsub_test(void)
{
	char *str = "Hello blob";

	unsigned int start = 6;
	size_t	len = 4;
	
	char *sub = ft_strsub(str, start, len);
	printf("%s\n", sub);
}

void strsub_test_empty(void)
{
	char *str = "";

	unsigned int start = 6;
	size_t	len = 0;
	
	char *sub = ft_strsub(str, start, len);
	printf("%s\n", sub);
	printf("NULL passed: ");
	printf("%s\n", ft_strsub(NULL, 0, 12));
}

void strsub_test_start_bigger_than_strlens(void)
{
	char *str = "abcg";

	unsigned int start = 7;
	size_t	len = 4;
	
	char *result = ft_strsub(str, start, len);
	if (!strncmp(result, "", 1)) 
	{	
		printf("ok. Works with start bigger than original strlen\n");
		free(result);
		return ;
	}
	printf("%s\n", result);
}


void same_start(void) //??
{
	char	*str = "TEST";
	size_t	size = 4;

	char	*result = ft_strsub(str, 4, size);
	if (!result)
	{
		printf("NULL RETURNED");
		return;
	}
	printf("%s\n", result);
	if (!strncmp(result, "", 1)) 
	{	
		printf("ok. Works with start that same length of original str\n");
		free(result);
		return ;
	}
	free(result);
	printf("KO. doesnt work with start bigger than length of original str\n");
}

void fullstr(void) 
{
	char	*s = "Let's check full str";
	size_t	size = strlen(s);

	char	*result = ft_strsub(s, 0, size);
	if (strcmp(s, result) == 0)
	{
		printf("Full string check ok\n");
		return ;
	}
	printf("Full string check !KO!\n");
}

int main(void)
{
	strsub_test();
	strsub_test_empty();
	strsub_test_start_bigger_than_strlens();
	later_start();
	fullstr();
}