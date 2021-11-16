#include "libft.h"
#include <stdio.h>

void print_char_array(char *arr, int n)
{	
	int i = 0;
	printf("\"");
	while (i < n)
	{
		if (arr[i] == '\0')
		{
			printf("+");
		}
		else
		{
			printf("%c", arr[i]);
		}
		i++;
	}
	printf("\"\n");
}

int main(int argc, char **argv)
{
	char *src;
	char *dest;
	char *src1;
	char *dest1;
	if (argc != 3)
	{
		printf("Provide two strings");
		return (1);
	}
	src = argv[1];
	dest = argv[2];
	src1 = argv[1];
	dest1 = argv[2];
	print_char_array(ft_strncpy(dest, src, 15), 15);
	print_char_array(strncpy(dest1, src1, 15), 15);
	return (0);
}