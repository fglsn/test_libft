#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Incorrect number of arguments\n");
        return (1);
    }
    printf("%s\n", ft_strstr(argv[1], argv[2]));
    printf("%s\n", strstr(argv[1], argv[2]));
    printf("%s\n", ft_strstr("Test for testing a test", "a t"));
    printf("%s\n", strstr("Test for testing a test", "a t"));
	printf("%s\n", ft_strstr(NULL, argv[2])); //should cause a segfault
}

//same pointers
// int main(void)
// {
// 	char	*s1 = "AAAAAAAAAAAAA";

// 	char	*i1 = strstr(s1, s1);
// 	char	*i2 = ft_strstr(s1, s1);
// 	printf("%s %s\n", i1, i2);
// 	return (0);
// }