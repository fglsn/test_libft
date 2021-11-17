#include <string.h>
#include "libft.h"
#include "test_libft.h"
#include <stdlib.h>

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int	memcpy_basic()
{
	char src[] = SRC;
	char dst1[] = DST;
	char dst2[] = DST;

	memcpy(dst1, src, strlen(src));
	ft_memcpy(dst2, src, strlen(src));

	return (!strcmp(dst1, dst2));
}

int	memcpy_zero_size_n()
{
	char to_compare[] = DST;
	char dst[] = DST;
	char src[] = SRC;

	ft_memcpy(dst, src, 0);
	return(!strcmp(to_compare, dst));
}


void ft_memcpy_test()
{
	TEST_RESULT(memcpy_basic());
	TEST_RESULT(memcpy_zero_size_n());
}