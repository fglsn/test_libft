#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

int strnstr_basic()
{
	char str[] = STR;
	char str2[] = STR;
	char needle[] = "for";
	char *r1 = strnstr(str, needle, 31);
	char *r2 = ft_strnstr(str2, needle, 31);
	return(!strcmp(r1, r2));
}

int strnstr_basic2()
{
	char str[] = STR;
	char needle[] = "kin";
	char *r1 = strnstr(str, needle, 8);
	char *r2 = ft_strnstr(str, needle, 8);
	return(!strncmp(r1, r2, 15));
}

int	strnstr_empty_needle()
{
	char str[] = STR;
	char str2[] = STR;
	char needle[] = "";
	char *r1 = strnstr(str, needle, 31);
	char *r2 = ft_strnstr(str2, needle, 31);
	return (!strcmp(r1, r2));
}

int	strnstr_both_empty()
{
	char str[] = "";
	char str2[] = "";
	char needle[] = "";
	char *r1 = strnstr(str, needle, 1);
	char *r2 = ft_strnstr(str2, needle, 1);
	return (!strcmp(r1, r2));
}

int	strnstr_same_pointers()
{
	char	*s1 = "ffffffffffff";
	char	*i1 = strnstr(s1, s1, 13);
	char	*i2 = ft_strnstr(s1, s1, 13);
	//printf("%s %s\n", i1, i2);
	return (!strcmp(i1, i2));
}

int strnstr_unicode()
{
	char *str = "Привет!";
	char *str2 = "ив";
	char *s1 = strnstr(str, str2, 14);
	char *s2 = ft_strnstr(str, str2, 14);

	return (s1 == s2);
}

void ft_strnstr_test()
{
	TEST_RESULT(strnstr_basic());
	TEST_RESULT(strnstr_basic2());
	TEST_RESULT(strnstr_empty_needle());
	TEST_RESULT(strnstr_both_empty());
	TEST_RESULT(strnstr_same_pointers());
	TEST_RESULT(strnstr_unicode());
}