#include "libft.h"
#include "test_libft.h"
#include <stdio.h>

#define	SRC	"Source string."
#define	DST	"This is destination string."
#define	STR	"Some kinda string for testing."

// void print_char_array(char *arr, int n)
// {	
// 	int i = 0;
// 	printf("\"");
// 	while (i < n)
// 	{
// 		if (arr[i] == '\0')
// 		{
// 			printf("+");
// 		}
// 		else
// 		{
// 			printf("%c", arr[i]);
// 		}
// 		i++;
// 	}
// 	printf("\"\n");
// }

int strncpy_basic()
{
	char src[] = SRC;
	char dst1[] = DST;
	char dst2[] = DST;

	strncpy(dst1, src, 14);
	ft_strncpy(dst2, src, 14);

	return (!memcmp(dst1, dst2, strlen(DST)));
}

int strncmp_fit_terminators()
{
	char src[] = SRC;
	char dst1[] = DST;
	char dst2[] = DST;

	strncpy(dst1, src, 27);
	ft_strncpy(dst2, src, 27);
	// printf("Original:\n");
	// print_char_array(dst1, 28);
	// printf("FT_:\n");
	// print_char_array(dst2, 28);
	return (!memcmp(dst1, dst2, 27));
}

int	strncpy_empty()
{
	char src[] = "";
	char dst1[] = DST;
	char dst2[] = DST;
	memset(dst1, 'F', sizeof(dst1));
	memset(dst2, 'F', sizeof(dst2));

	strncpy(dst1, src, 1);
	ft_strncpy(dst2, src, 1);
	return (!memcmp(dst1, dst2, strlen(DST)));
}

int	strncpy_unicode()
{
	char src[] = "Привет!";
	char dst1[] = DST;
	char dst2[] = DST;

	strncpy(dst1, src, 13);
	ft_strncpy(dst2, src, 13);
	return (!memcmp(dst1, dst2, 13));
}

void ft_strncpy_test()
{
	TEST_RESULT(strncpy_basic());
	TEST_RESULT(strncmp_fit_terminators());
	TEST_RESULT(strncpy_empty());
	TEST_RESULT(strncpy_unicode());
}