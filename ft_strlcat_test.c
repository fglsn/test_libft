#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int strlcat_basic(void)
{
	char dest[] = "kust";
	char src[] = "ik i dustik doma sidyat";
	size_t result;
	size_t result2;
	size_t size = 150;
	char buf[size];
	char buf2[size];

	strcpy(buf, dest);
	strcpy(buf2, dest);
	result = strlcat(buf, src, size);
	result2 = strlcat(buf2, src, size);
	//printf("-%s-\n+%s+\n", buf, buf2);
	return (result == result2);

	// printf("Result of ft_strlcat: %zu\n", result2);
	// if (result2 > size - 1)
	// {
	// 	printf("String truncated\n");
	// }
	// else
	// {
	// 	printf("Full string copied\n");
	// }
}

int strlcat_basic2()
{
	char dst[] = DST;
	char dst2[] = DST;
	char src[] = "Hello";
	size_t size = 4;
	size_t result1;
	size_t result2;

	result1 = strlcat(dst, src, size);
	result2 = strlcat(dst2, src, size);
	if (result1 != result2)
		printf("-%s-\n+%s+\n", dst, dst2);
	return (result1 == result2);
}

int strlcat_basic3()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

	strlcat(buff1, str, max);
	ft_strlcat(buff2, str, max);
	return (!strcmp(buff1, buff2));
}

int	strlcat_empty_src()
{
	char src[] = "";
	char dst1[420] = DST;
	char dst2[420] = DST;

	strlcat(dst1, src, 6);
	ft_strlcat(dst2, src, 6);
	return (!strcmp(dst1, dst2));
}

int	strlcat_empty_dst()
{
	char src[] = SRC;
	char dst1[420] = "";
	char dst2[420] = "";

	strlcat(dst1, src, 6);
	ft_strlcat(dst2, src, 6);
	return (!strcmp(dst1, dst2));
}

int strlcat_size_bigger_than_dstlen()
{
	char src[] = SRC;
	char dst1[420] = DST;
	char dst2[420] = DST;

	strlcat(dst1, src, 42);
	ft_strlcat(dst2, src, 42);
	if (strcmp(dst1, dst2))
		printf("-%s-\n+%s+\n", dst1, dst2);
	return (!strcmp(dst1, dst2));
}

int strlcat_size_zero()
{
	char src[] = SRC;
	char dst1[420] = DST;
	char dst2[420] = DST;

	strlcat(dst1, src, 0);
	ft_strlcat(dst2, src, 0);
	if (strcmp(dst1, dst2))
		printf("-%s-\n+%s+\n", dst1, dst2);
	return (!strcmp(dst1, dst2));
}


void ft_strlcat_test()
{
	TEST_RESULT(strlcat_basic());
	TEST_RESULT(strlcat_basic2());
	TEST_RESULT(strlcat_basic3());
	TEST_RESULT(strlcat_empty_src());
	TEST_RESULT(strlcat_empty_dst());
	TEST_RESULT(strlcat_size_bigger_than_dstlen());
	TEST_RESULT(strlcat_size_zero());
}
