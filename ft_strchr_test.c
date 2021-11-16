#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = "Test string";
	char *s1 = strchr(str, 114);
	char *s2 = ft_strchr(str, 114);

	if (s1 == s2)
	{
		printf("OK\ns1 - %s (realfunc) \ns2 - %s\n", s1, s2);
		return (0);
	}
	printf("Test failed\ns1 - '%s' (realfunc)\n", s1);
	return (1);
}

//not found char
// int main(void)
// {
// 	char *str = "Test string.";
// 	char *s1 = strchr(str, 'z'); 
// 	char *s2 = ft_strchr(str, 'z');

// 	if (s1 == s2)
// 	{
// 		printf("OK\ns1 - %s (realfunc) \ns2 - %s\n", s1, s2);
// 		return (0);
// 	}
// 	printf("Test failed\ns1 - '%s' (realfunc)\n", s1);
// 	return (1);
// }

//first char
// int main(void)
// {
// 	char *str = "Test string";
// 	char *s1 = strchr(str, 'T');
// 	char *s2 = ft_strchr(str, 'T');

// 	if (s1 == s2)
// 	{
// 		printf("OK\ns1 - %s\ns2 - %s\n", s1, s2);
// 		return (0);
// 	}
// 	printf("Test failed\n");
// 	return (1);
// }

//last char
// int main(void)
// {
// 	char *str = "Test string";
// 	char *s1 = strchr(str, 'g');
// 	char *s2 = ft_strchr(str, 'g');

// 	if (s1 == s2)
// 	{
// 		printf("OK\ns1 - %s\ns2 - %s\n", s1, s2);
// 		return (0);
// 	}
// 	printf("Test failed\n");
// 	return (1);
// }


// check for terminator
// int main(void)
// {
// 	char *str = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char *s1 = strchr(str, '\0');
// 	char *s2 = ft_strchr(str, '\0');

// 	if (s1 == s2)
// 	{
// 		printf("OK\ns1 - %s (realfunc) \ns2 - %s\n", s1, s2);
// 		return (0);
// 	}
// 	printf("Test failed\ns1 - '%s' (realfunc)\n", s1);
// 	return (1);
// }


// unicode
// int main(void)
// {
// 	char *str = "īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ";
// 	char *s1 = strchr(str, L'ª');
// 	char *s2 = ft_strchr(str, L'ª');

// 	if (s1 == s2)
// 	{
// 		printf("OK\ns1 - %s (realfunc) \ns2 - %s\n", s1, s2);
// 		return (0);
// 	}
// 	printf("Test failed\ns1 - '%s' (realfunc)\n", s1);
// 	return (1);
// }