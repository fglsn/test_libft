#include "libft.h"
#include <stdio.h>

void strequ_test (void)
{
	// char s1[] = "Hell0";
	// char s2[] = "Hello";

	// char s3[] = "123Z";
	// char s4[] = "123A";

	// char s5[] = "Hello";
	// char s6[] = "Hello";

	// char s7[] = " ";
	// char s8[] = " ";

	// char s9[] = "";
	// char s10[] = "";

	// char s11[3];
	// char s12[0];

	// char *s13 = "\0";
	// char s14[0];

	// char s15[0];
	// char s16[0];

	// char s17[] = "\n";
	// char s18[] = "\v";

	char *str = "BEBEBE";
	char *str2 = "not bebebe";
	int n = ft_strnequ(str, str2, 6);

	if (n == 0)
	{
		printf("strnequ works with basic non-equ strings\n");
	}
	else if (n == 1)
	{
		printf("strnequ DOESNT work with basic non-equ strings\n");
	} 
		
	
}
// 	printf("%d\n", ft_strnequ(s1, s2));
// 	printf("%d\n", ft_strnequ(s3, s4));
// 	printf("%d\n", ft_strnequ(s5, s6));
// 	printf("%d\n", ft_strnequ(s7, s8));
// 	printf("%d\n", ft_strnequ(s9, s10));
// 	printf("%d\n", ft_strnequ(s11, s12));
// 	printf("%d\n", ft_strnequ(s13, s14));
// 	printf("%d\n", ft_strnequ(s15, s16));
// 	printf("%d\n", ft_strnequ(s17, s18));
	
// 	printf("%d\n", ft_strnequ("string", "string"));
// 	printf("%d\n", ft_strnequ("strin1g", "string"));
// 	printf("%d\n", ft_strnequ(str, str));
// 	ft_strnequ(str, NULL);
// 	ft_strnequ(NULL, NULL);
// }

void equal(void)
{
	char *str = "BEBEBE";
	char *str2 = "BEBEBE";
	int n = ft_strnequ(str, str2, 6);

	if (n == 1)
	{
		printf("strnequ works with basic equal strings\n");
	}
	else if (n == 0)
	{
		printf("strnequ DOESNT work with basic equal strings\n");
	} 
		
}

void null_str(void)
{
	char *str = "";
	char *str2 = "";
	int n = ft_strnequ(str, str2, 6);

	if (n == 1)
	{
		printf("strnequ works with empty strings\n");
	}
	else if (n == 0)
	{
		printf("strnequ DOESNT work with empty strings\n");
	} 
	
	char	*s1 = "AAAAAAAA";
	printf("Lets pass NULL:. OK if not segfault\n");
	printf("OK. with null: %d\n", ft_strnequ(s1, NULL, 3));
	printf("OK. with null: %d\n",ft_strnequ(NULL, NULL, 3));

}

void same_str(void)
{
	char *str = "HIhihihihi";
	int n = ft_strnequ(str, str, 6);
	if (n == 1)
	{
		printf("strnequ works with same passed strings\n");
	}
	else if (n == 0)
	{
		printf("strnequ DOESNT work with same passed strings\n");
	} 


}

int main(void)
{
	strequ_test();
	equal();
	null_str();
	same_str();
}