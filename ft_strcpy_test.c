
#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int	strcpy_basic()
{
	char src[] = SRC;
	char dst1[] = DST;
	char dst2[] = DST;

	strcpy(dst1, src);
	ft_strcpy(dst2, src);

	return (!strcmp(dst1, dst2));
}

int	strcpy_empty()
{
	char src[] = "";
	char dst1[] = DST;
	char dst2[] = DST;
	memset(dst1, 'F', sizeof(dst1));
	memset(dst2, 'F', sizeof(dst2));

	strcpy(dst1, src);
	ft_strcpy(dst2, src);
	return (!strcmp(dst1, dst2));
}

int	strcpy_unicode()
{
	char src[] = "Привет!";
	char dst1[] = DST;
	char dst2[] = DST;

	strcpy(dst1, src);
	ft_strcpy(dst2, src);
	return (!strcmp(dst1, dst2));
}

void ft_strcpy_test()
{
	TEST_RESULT(strcpy_basic());
	TEST_RESULT(strcpy_empty());
	TEST_RESULT(strcpy_unicode());
}