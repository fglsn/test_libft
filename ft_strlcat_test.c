#include "libft.h"
#include <stdio.h>

void strlcat_test1(void)
{
	char dest[] = "kust";
	char src[] = "ik i dustik doma sidyat";
	size_t result;
	size_t size = 150;
	char buf[size];

	strcpy(buf, dest);
	result = strlcat(buf, src, size);
	printf("%s\n", buf);
	printf("Result of ft_strlcat: %zu\n", result);
	if (result > size - 1)
	{
		printf("String truncated\n");
	}
	else
	{
		printf("Full string copied\n");
	}
}

void strlcat_basic(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

	strlcat(buff1, str, max);
	ft_strlcat(buff2, str, max);
	if (!strcmp(buff1, buff2))
	{
		printf("OK\n");
		return;
	}
	printf("KO\n");
}

void strlcat_test2(void)
{
	char dst[] = "HelloWorld";
	char dst2[] = "HelloWorld";
	char src[] = "Hello";
	size_t size = 4;
	size_t size1;
	size_t size2;

	size1 = strlcat(dst, src, size);
	size2 = ft_strlcat(dst2, src, size);
	if (!strcmp(dst, dst2))
	{
		printf("OK\n%zu | %zu\n", size1, size2);
		printf("%s %s\n", dst, dst2);
		return ;
	}
	printf("KO\n%zu | %zu\n", size1, size2);
}

int main(void)
{
	strlcat_basic();
	strlcat_test1();
	strlcat_test2();
	// char str[4];
	// char src[] = "src";
	// size_t n = ft_strlcat(str, src, 10);
	// printf("%zu\n", n);
}