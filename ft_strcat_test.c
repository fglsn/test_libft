#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Provide two strings\n");
        return (1);
    }

        printf("%s\n", ft_strcat(argv[1], argv[2]));

        printf("%s\n", ft_strcat(NULL, argv[2])); //should cause segfault

        return (0);
}