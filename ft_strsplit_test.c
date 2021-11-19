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

int strsplit_empty_str()
{
	char *to_comp[1] = {NULL};
	char **res = ft_strsplit("", ' ');
	return (compare(to_comp, res));
}


// int strsplit_not_found_delimeter()
// {
// 	char *to_comp[2] = {STR, NULL};
// 	char **res = ft_strsplit(STR, 'z');
// 	return (compare(to_comp, res));
// }

int strsplit_full_of_delimeters()
{
	char *to_comp[1] = {NULL};
	char **res = ft_strsplit("***********************", '*');
	return (compare(to_comp, res));
}

int strsplit_trim_start()
{
	char *to_comp[2] = {"Start.", NULL};
	char **res = ft_strsplit("------------------------Start.", '-');
	return (compare(to_comp, res));
}

int strsplit_trim_end()
{
	char *to_comp[2] = {"The End", NULL};
	char **res = ft_strsplit("The End................", '.');
	return (compare(to_comp, res));
}

void ft_strsplit_test()
{
	TEST_RESULT(strsplit_basic());
	TEST_RESULT(strsplit_empty_str());
	TEST_RESULT(strsplit_full_of_delimeters());
	TEST_RESULT(strsplit_trim_start());
	TEST_RESULT(strsplit_trim_end());
}
