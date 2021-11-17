#include "libft.h"
#include "test_libft.h"

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

int memmove_basic()
{
	char src[] = SRC;
	char dst1[] = DST;
	char dst2[] = DST;

	memmove(dst1, src, strlen(src));
	ft_memmove(dst2, src, strlen(src));
	return (!memcmp(dst1, dst2, strlen(DST)));
}

int memmove_basic_same_str_as_params()
{
	char dst1[] = DST;
	char dst2[] = DST;

	memmove(dst1, dst1, strlen(DST));
	ft_memmove(dst2, dst2, strlen(DST));
	return (!memcmp(dst1, dst2, strlen(DST)));
}

int	memmove_overlap()
{
	char	dst1[100];
	char	dst2[100];
	char	*str = "123456789abcdefghigklmnop123456789";
	int		size = 24;

	bzero(dst1, 100);
	bzero(dst2, 100);
	memcpy(dst1, str, strlen(str));
	memcpy(dst2, str, strlen(str));

	memmove(dst1 + 10, dst1, size);
	ft_memmove(dst2 + 10, dst2, size);
	//printf("-- %s --\n++ %s ++\n", dst1, dst2);
	return (!memcmp(dst1, dst2, size));
}

int	memmove_overlap_other_side()
{
	char	dst1[100];
	char	dst2[100];
	char	*str = "123456789abcdefghigklmnop123456789";
	int		size = 24;

	bzero(dst1, 100);
	bzero(dst2, 100);

	memcpy(dst1, str, strlen(str));
	memcpy(dst2, str, strlen(str));

	memmove(dst1, dst1 + 10, size);
	ft_memmove(dst2, dst2 + 10, size);
	//printf("-- %s --\n++ %s ++\n", dst1, dst2);
	return (!memcmp(dst1, dst2, size));
}

void ft_memmove_test()
{
	TEST_RESULT(memmove_basic());
	TEST_RESULT(memmove_basic_same_str_as_params());
	TEST_RESULT(memmove_overlap());
	TEST_RESULT(memmove_overlap_other_side());
}
