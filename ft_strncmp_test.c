#include <stdio.h>
#include "libft.h"

// int main(int argc, char **argv)
// {
// 	if (argc != 4)
// 	{
// 		printf("Provide two strings and int.\n");
// 		return (1);
// 	}
// 	char *s1 = argv[1];
// 	char *s2 = argv[2];
// 	printf("%d\n", strncmp(s1, s2, atoi(argv[3])));
// 	printf("%d\n", ft_strncmp(s1, s2, atoi(argv[3])));
// 	return (0);
// }

int main(void)
{
	char	*s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char	*s2 = NULL;

	int i = (strncmp(s1, s2, 6));
	int j = (ft_strncmp(s1, s2, 6));

	printf("%d\n", i);
	printf("%d\n", j);
}