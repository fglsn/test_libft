#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

int compare(char **str, char **str2)
{
	while (*str && *str2)
	{
		if (strcmp(*str, *str2))
		{
			return (0);
		}
		str++;
		str2++;
	}
	return (*str == *str2);
}

int strsplit_basic()
{
	char *to_comp[6] = {"Some", "kinda", "string", "for", "testing.", NULL};
	char **res = ft_strsplit(STR, ' ');
	return (compare(to_comp, res));
}

int strsplit_empty()
{
	char *to_comp[6] = {"Some", "kinda", "string", "for", "testing.", NULL};
	char **res = ft_strsplit(STR, ' ');
	return (compare(to_comp, res));
}

void ft_strsplit_test()
{
	TEST_RESULT(strsplit_basic());
}
