#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

int strstr_basic()
{
	char str[] = STR;
	char str2[] = STR;
	char needle[] = "for";
	char *r1 = strstr(str, needle);
	char *r2 = ft_strstr(str2, needle);
	return(!strcmp(r1, r2));
}

int	strstr_empty_needle()
{
	char str[] = STR;
	char str2[] = STR;
	char needle[] = "";
	char *r1 = strstr(str, needle);
	char *r2 = ft_strstr(str2, needle);
	return (!strcmp(r1, r2));
}

int	strstr_both_empty()
{
	char str[] = "";
	char str2[] = "";
	char needle[] = "";
	char *r1 = strstr(str, needle);
	char *r2 = ft_strstr(str2, needle);
	return (!strcmp(r1, r2));
}

int	strstr_same_pointers()
{
	char	*s1 = "ffffffffffff";
	char	*i1 = strstr(s1, s1);
	char	*i2 = ft_strstr(s1, s1);
	//printf("%s %s\n", i1, i2);
	return (!strcmp(i1, i2));
}

int strstr_unicode()
{
	char *str = "Привет!";
	char *str2 = "ив";
	char *s1 = strstr(str, str2);
	char *s2 = ft_strstr(str, str2);

	return (s1 == s2);
}

void ft_strstr_test()
{
	TEST_RESULT(strstr_basic());
	TEST_RESULT(strstr_empty_needle());
	TEST_RESULT(strstr_both_empty());
	TEST_RESULT(strstr_same_pointers());
	TEST_RESULT(strstr_unicode());
}