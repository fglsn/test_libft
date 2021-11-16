#include "libft.h"
#include <stdio.h>

// int main(void)
// {
// 	char const str[3][442] = {
// 	{"HELLO     World\n\n\n\n\n\n    "} ,
// 	{"       "} ,
// 	{"HLOP"}
// 	};
// 	printf("\"%s\"\nEmpty str of len %zu: \"%s\"\n\"%s\"\n", ft_strtrim(str[0]), ft_strlen(ft_strtrim(str[1])), ft_strtrim(str[1]), ft_strtrim(str[2]));
// }

void strtrim_check_null(void)
{
	char	*ret;
	ret = ft_strtrim(NULL);
	if (!ret)
		printf("Test OK\n");
	printf("Test KO");
}

int main(void)
{
	
	strtrim_check_null();
	return (0);
}