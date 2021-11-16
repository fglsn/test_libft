#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

#define STR_1 "This is string."
#define STR_2 "This is string for destination."
#define STR_3 "This is string for destination."

// int main(void)
// {
//     char *str = "Test string.\n";
//     char *dest;
//     char *dest2;

//     dest = malloc(sizeof(char) * strlen(str));
//     dest2 = malloc(sizeof(char) * strlen(str));

//     memcpy(dest, str, strlen(str));
//     ft_memcpy(dest2, str, strlen(str));

//     if (strcmp(dest, dest2) != 0)
//     {
//         printf("Memcpy test failed\n");
//         return (1);
//     }
//     printf("OK\n");
//     return(0);
// }

// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int *copy;
//     int *copy2;

//     copy = malloc(sizeof(int) * 7);
//     copy2 = malloc(sizeof(int) * 7);

//     memcpy(copy, arr, 7);
//     ft_memcpy(copy2, arr, 7);

//     if (memcmp(copy, copy2, 7) != 0)
//     {
//         printf("Memcpy test failed\n");
//         return (1);
//     }
//     printf("OK\n");
//     return(0);
// }

int main(void)
{
    char src[] = STR_1;
    char buff1[] = STR_2;
    char buff2[] = STR_3;

    // dest = malloc(sizeof(char) * strlen(str));
    // dest2 = malloc(sizeof(char) * strlen(str));

    memcpy(buff1, src, strlen(src));
    ft_memcpy(buff2, src, strlen(src));

    if (strcmp(buff1, buff2) != 0)
    {
        printf("Memcpy test failed\n");
        return (1);
    }
    printf("OK\n");
    return(0);
}