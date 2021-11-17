#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int memchr_basic()
{
	char str[] = STR;
	return (memchr(str, 107, 30) == ft_memchr(str, 107, 30)); // k
}

int memchr_basic_2(void)
{
	char	*src = "/|\x12\xff\x09\x42\042\42|\\";
	int		size = 10;

	return (memchr(src, '\x42', size) == ft_memchr(src, '\x42', size));
}

int memchr_not_found_char()
{
	char str[] = STR;
	return (memchr(str, 'z', 30) == ft_memchr(str, 'z', 30));
}

void ft_memchr_test()
{
	TEST_RESULT(memchr_basic());
	TEST_RESULT(memchr_basic_2());
	TEST_RESULT(memchr_not_found_char());
}