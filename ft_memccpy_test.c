#include "libft.h"
#include "test_libft.h"
#include <string.h>
#include <stdio.h>

int	memccpy_basic()
{
	char src[] = "Source string.";
	char dst1[] = "This is destination string.";
	char dst2[] = "This is destination string.";
	char *r1 = memccpy(dst1, src, ' ', 10);
	char *r2 = ft_memccpy(dst2, src, ' ', 10);
	//printf("-%s-\n+%s+\n", r1, r2);
	return (!memcmp(r1, r2, 15));
}

int memccpy_basic_two()
{
	char	src[] = "Test string, func should return NULL";
	char	dst1[25];
	char	dst2[25];
	char *r1 = NULL;
	r1 = memccpy(dst1, src, 'f', 13);
	char *r2 = NULL;
	r2 = ft_memccpy(dst2, src, 'f', 13);
	//printf("-%s-\n+%s+\n", r1, r2);
	if (!memcmp(dst1, dst2, 13))
		return (1);
	return (0);
}

int memccpy_char_not_found()
{
	char	src[] = "Test string, func should return NULL";
	char	dst1[37];
	char	dst2[37];
	memccpy(dst1, src, 'z', 37);
	ft_memccpy(dst2, src, 'z', 37);
	// char *r1 = memccpy(dst1, src, 'z', 37);
	// char *r2 = ft_memccpy(dst2, src, 'z', 37);
	// printf("-%s-\n+%s+\n", r1, r2);
	// printf("-%s-\n+%s+\n", dst1, dst2);
	if (!memcmp(dst1, dst2, 37))
		return (1);
	return (0);
}

int	memccpy_zero_size_n()
{
	char to_compare[] = "This is destination string.";
	char dst[] = "This is destination string.";
	char src[] = "Source string.";

	ft_memccpy(dst, src, 'i', 0);
	return(!strcmp(to_compare, dst));
}



void ft_memccpy_test()
{
	TEST_RESULT(memccpy_basic());
	TEST_RESULT(memccpy_basic_two());
	TEST_RESULT(memccpy_char_not_found());
	TEST_RESULT(memccpy_zero_size_n());
}