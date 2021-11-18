#include "libft.h"
#include "test_libft.h"

#define	STR	"Some kinda string for testing."

int strchr_basic()
{
	char *str = STR;
	char *s1 = strchr(str, 114); //144 == 'r'
	char *s2 = ft_strchr(str, 114);

	return (s1 == s2);
}

int strchr_non_found_char()
{
	char *str = STR;
	char *s1 = strchr(str, 'z'); 
	char *s2 = ft_strchr(str, 'z');

	return (s1 == s2);
}

int strchr_first_char()
{
	char *str = STR;
	char *s1 = strchr(str, 'S');
	char *s2 = ft_strchr(str, 'S');

	return (s1 == s2);
}

int strchr_last_char()
{
	char *str = STR;
	char *s1 = strchr(str, '.');
	char *s2 = ft_strchr(str, '.');

	return (s1 == s2);
}

int strchr_unicode()
{
	char *str = "Привет!";
	char *s1 = strchr(str, L'и');
	char *s2 = ft_strchr(str, L'и');

	return (s1 == s2);
}

int strchr_find_terminator()
{
	char *str = "Some kinda string \0for testing\0";
	char *s1 = strchr(str, '\0');
	char *s2 = ft_strchr(str, '\0');

	return (s1 == s2);
}

void ft_strchr_test()
{
	TEST_RESULT(strchr_basic());
	TEST_RESULT(strchr_non_found_char());
	TEST_RESULT(strchr_first_char());
	TEST_RESULT(strchr_last_char());
	TEST_RESULT(strchr_unicode());
	TEST_RESULT(strchr_find_terminator());
}
