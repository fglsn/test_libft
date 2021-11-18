#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int strcat_basic()
{
	char src[] = SRC;
	char dst1[420] = DST;
	char dst2[420] = DST;

	strcat(dst1, src);
	ft_strcat(dst2, src);

	return (!strcmp(dst1, dst2));
}

int	strcat_empty_src()
{
	char src[] = "";
	char dst1[420] = DST;
	char dst2[420] = DST;

	strcat(dst1, src);
	ft_strcat(dst2, src);
	return (!strcmp(dst1, dst2));
}

int	strcat_empty_dst()
{
	char src[] = SRC;
	char dst1[420] = "";
	char dst2[420] = "";

	strcat(dst1, src);
	ft_strcat(dst2, src);
	return (!strcmp(dst1, dst2));
}

int	strcat_unicode()
{
	char src[] = "Привет!";
	char dst1[420] = DST;
	char dst2[420] = DST;

	strcat(dst1, src);
	ft_strcat(dst2, src);
	return (!strcmp(dst1, dst2));
}

void ft_strcat_test()
{
	TEST_RESULT(strcat_basic());
	TEST_RESULT(strcat_empty_src());
	TEST_RESULT(strcat_empty_dst());
	TEST_RESULT(strcat_unicode());
}