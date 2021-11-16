#include "libft.h"
#include <stdio.h> 


// int main(void)
// {
// 	int i = 0;
// 	char	*s = "0 0 0 0 0 0 0 0 0";
// 	char	**result = ft_strsplit(s, ' ');
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }


void strsplit_check_null(void)
{
	char	**ret = ft_strsplit(NULL, ' ');
	if (!ret)
	{
		printf("Test OK\n");
		return ;
	}
	printf("Test KO");
	return ;
}

int main(void)
{
	
	strsplit_check_null();
	return (0);
}