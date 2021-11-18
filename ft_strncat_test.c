#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int strncat_basic()
{
	char src[] = SRC;
	char dst1[420] = DST;
	char dst2[420] = DST;

	strncat(dst1, src, 6);
	ft_strncat(dst2, src, 6);

	return (!strcmp(dst1, dst2));
}

int	strncat_empty_src()
{
	char src[] = "";
	char dst1[420] = DST;
	char dst2[420] = DST;

	strncat(dst1, src, 6);
	ft_strncat(dst2, src, 6);
	return (!strcmp(dst1, dst2));
}

int	strncat_empty_dst()
{
	char src[] = SRC;
	char dst1[420] = "";
	char dst2[420] = "";

	strncat(dst1, src, 6);
	ft_strncat(dst2, src, 6);
	return (!strcmp(dst1, dst2));
}

int strncat_size_bigger_than_dstlen()
{
	char src[] = SRC;
	char dst1[420] = DST;
	char dst2[420] = DST;

	strncat(dst1, src, 42);
	ft_strncat(dst2, src, 42);
	if (strcmp(dst1, dst2))
		printf("-%s-\n+%s+\n", dst1, dst2);
	return (!strcmp(dst1, dst2));
}

int	strncat_unicode()
{
	char src[] = "Привет!";
	char dst1[420] = DST;
	char dst2[420] = DST;

	strncat(dst1, src, 15);
	ft_strncat(dst2, src, 15);
	//printf("-%s-\n+%s+\n", dst1, dst2);
	return (!strcmp(dst1, dst2));
}

void ft_strncat_test()
{
	TEST_RESULT(strncat_basic());
	TEST_RESULT(strncat_empty_src());
	TEST_RESULT(strncat_empty_dst());
	TEST_RESULT(strncat_size_bigger_than_dstlen());
	TEST_RESULT(strncat_unicode());
}
