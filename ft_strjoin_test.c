#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	*s1 = "HELLO ";
	char	*s2 = "World";
	char a[3][42] = {
	{"HELLO World"} ,
	{"bob"} ,
	{"HLOP"}
	};

	//char 	*ex = "HELLO World";
	char	*res = ft_strjoin(s1, s2);
	if (!strcmp(a[0], res))
	{
		printf("%s\n", res);
		free(res);
	}
	res = ft_strjoin(NULL, s2);
	printf("%s\n", res);
	free(res);
	res = ft_strjoin(s1, NULL);
	printf("%s\n", res);
	free(res);
	
	
}