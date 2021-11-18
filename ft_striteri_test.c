#include "libft.h"
#include <stdio.h>

void	ft_putstring_2(unsigned int i, char *s)
{
	if ((i % 1) == 0)
		s[i] = ft_toupper(s[i]);
	else
		s[i] = ft_tolower(s[i]);
}


void ft_striteri_test(void)
{
	char *str = strdup("Test striteri");
	ft_striteri(str, &ft_putstring_2);
	printf("%s", str);
}


// void	alternate(unsigned int i, char *string)
// {
// 	if ((i % 1) == 0)
// 		string[i] = ft_toupper(string[i]);
// 	else
// 		string[i] = ft_tolower(string[i]);
// }

// signed	main()
// {
// 	char *string = strdup("hello world\n");
// 	ft_striteri(string, alternate);
// 	printf("%s", string);
// }

