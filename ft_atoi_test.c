#include <stdio.h>
#include "libft.h"



void check_zeroes(void)
{
	char *n = "\n\n\n\n   \f\f\v  -00004949";
	printf("%d\n", atoi(n));
	printf("%d\n", ft_atoi(n));
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Provide numeric string.\n");
		return (1);
	}
	
	char *s1 = argv[1];
	printf("%d\n", atoi(s1));
	printf("%d\n", ft_atoi(s1));
	check_zeroes();
	return (0);
}

// -9223372036854775808
// 9223372036854775807
// -9223372036854775808

// -2147483648

// -9999999999999999999999999 
// 99999999999999999999999999

// 11515845246265065471
// 9223372036854775807

// 21474836496468787683