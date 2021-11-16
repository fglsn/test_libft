#include "libft.h"
#include <stdio.h>

void strequ_test (void)
{
	char s1[] = "Hell0";
	char s2[] = "Hello";

	char s3[] = "123Z";
	char s4[] = "123A";

	char s5[] = "Hello";
	char s6[] = "Hello";

	char s7[] = " ";
	char s8[] = " ";

	char s9[] = "";
	char s10[] = "";

	char s11[3];
	char s12[0];

	char *s13 = "\0";
	char s14[0];

	char s15[0];
	char s16[0];

	char s17[] = "\n";
	char s18[] = "\v";

	char *str = "BEBEBE";
	

	printf("%d\n", ft_strequ(s1, s2));
	printf("%d\n", ft_strequ(s3, s4));
	printf("%d\n", ft_strequ(s5, s6));
	printf("%d\n", ft_strequ(s7, s8));
	printf("%d\n", ft_strequ(s9, s10));
	printf("%d\n", ft_strequ(s11, s12));
	printf("%d\n", ft_strequ(s13, s14));
	printf("%d\n", ft_strequ(s15, s16));
	printf("%d\n", ft_strequ(s17, s18));
	
	printf("%d\n", ft_strequ("string", "string"));
	printf("%d\n", ft_strequ("strin1g", "string"));
	printf("%d\n", ft_strequ(str, str));
	ft_strequ(str, NULL);
	ft_strequ(NULL, NULL);
}

int main(void)
{
	strequ_test();
}