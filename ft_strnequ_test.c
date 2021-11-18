#include "libft.h"
#include "test_libft.h"

int strnequ_non_equ()
{
	char *str = "BEBEBE";
	char *str2 = "not bebebe";
	return (!ft_strnequ(str, str2, 6));
}

int strnequ_equal()
{
	char *str = "BEBEBE";
	char *str2 = "BEBEBE";
	return(ft_strnequ(str, str2, 6));
}

int strnequ_empty_str()
{
	char *str = "";
	char *str2 = "";
	return(ft_strnequ(str, str2, 6));
}

int strnequ_same_str(void)
{
	char *str = "HIhihihihi";
	return(ft_strnequ(str, str, 6));
}

void ft_strnequ_test()
{
	TEST_RESULT(strnequ_non_equ());
	TEST_RESULT(strnequ_equal());
	TEST_RESULT(strnequ_empty_str());
	TEST_RESULT(strnequ_same_str());
}