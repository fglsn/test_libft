#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

int strrchr_basic()
{
	char *str = STR;
	char *s1 = strrchr(str, 114); //144 == 'r'
	char *s2 = ft_strrchr(str, 114);

	return (s1 == s2);
}

int strrchr_non_found_char()
{
	char *str = STR;
	char *s1 = strrchr(str, 'z'); 
	char *s2 = ft_strrchr(str, 'z');

	return (s1 == s2);
}

int strrchr_first_char()
{
	char *str = STR;
	char *s1 = strrchr(str, 'S');
	char *s2 = ft_strrchr(str, 'S');

	return (s1 == s2);
}

int strrchr_last_char()
{
	char *str = STR;
	char *s1 = strrchr(str, '.');
	char *s2 = ft_strrchr(str, '.');

	return (s1 == s2);
}

int strrchr_unicode()
{
	char *str = "Привет!";
	char *s1 = strrchr(str, L'и');
	char *s2 = ft_strrchr(str, L'и');

	return (s1 == s2);
}

int strrchr_find_terminator()
{
	char *str = "Some kinda string \0for testing\0";
	char *s1 = strrchr(str, '\0');
	char *s2 = ft_strrchr(str, '\0');

	return (s1 == s2);
}

void ft_strrchr_test()
{
	TEST_RESULT(strrchr_basic());
	TEST_RESULT(strrchr_non_found_char());
	TEST_RESULT(strrchr_first_char());
	TEST_RESULT(strrchr_last_char());
	TEST_RESULT(strrchr_unicode());
	TEST_RESULT(strrchr_find_terminator());
}
