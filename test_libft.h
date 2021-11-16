#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

#define TEST_RESULT(RESULT) \
if (RESULT == 1) \
	printf("OK: Test %s passed\n", #RESULT); \
else if (!RESULT) \
	printf("-KO-: Test %s fails\n", #RESULT);

void	ft_memset_test();
int	ft_bzero_test();
int	ft_memcpy_test();
int	ft_memccpy_test();
int	ft_memmove_test();
int	ft_memchr_test();
int	ft_memcmp_test();
int	ft_strlen_test();
int	ft_strdup_test();
int	ft_strcpy_test();
int	ft_strncpy_test();
int	ft_strcat_test();
int	ft_strncat_test();
int	ft_strlcat_test();
int	ft_strchr_test();
int	ft_strrchr_test();
int	ft_strstr_test();
int	ft_strnstr_test();
int	ft_strcmp_test();
int	ft_strncmp_test();
void	ft_atoi_test();
int	ft_isalpha_test();
int	ft_isdigit_test();
int	ft_isalnum_test();
int	ft_isascii_test();
int	ft_isprint_test();
int	ft_toupper_test();
int	ft_tolower_test();
int	ft_memalloc_test();
int	ft_memdel_test();
int	ft_strnew_test();
int	ft_strdel_test();
int	ft_strclr_test();
int	ft_striter_test();
int	ft_striteri_test();
int	ft_strmap_test();
int	ft_strmapi_test();
int	ft_strequ_test();
int	ft_strnequ_test();
int	ft_strsub_test();
int	ft_strjoin_test();
int	ft_strtrim_test();
int	ft_strsplit_test();
int	ft_itoa_test();
int	ft_putchar_test();
int	ft_putstr_test();
int	ft_putendl_test();
int	ft_putnbr_test();
int	ft_putchar_fd_test();
int	ft_putstr_fd_test();
int	ft_putendl_fd_test();
int	ft_putnbr_fd_test();
int	ft_lstnew_test();
int	ft_lstdelone_test();
int	ft_lstdel_test();
int	ft_lstadd_test();
int	ft_lstiter_test();
int	ft_lstmap_test();

#endif
