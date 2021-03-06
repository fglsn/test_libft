CC = gcc
FLAGS = -Wall -Wextra -Werror

TESTS = ft_memset_test.c \
					ft_bzero_test.c \
					ft_memcpy_test.c \
					ft_memccpy_test.c \
					ft_memmove_test.c \
					ft_memchr_test.c \
					ft_memcmp_test.c \
					ft_strlen_test.c \
					ft_strdup_test.c \
					ft_strcpy_test.c \
					ft_strncpy_test.c \
					ft_strcat_test.c \
					ft_strncat_test.c \
					ft_strlcat_test.c \
					ft_strchr_test.c \
					ft_strrchr_test.c \
					ft_strstr_test.c \
					ft_strnstr_test.c \
					ft_strcmp_test.c \
					ft_strncmp_test.c \
					ft_atoi_test.c \
					ft_isalpha_test.c \
					ft_isdigit_test.c \
					ft_isalnum_test.c \
					ft_isascii_test.c \
					ft_isprint_test.c \
					ft_toupper_test.c \
					ft_tolower_test.c \
					ft_memalloc_test.c \
					ft_memdel_test.c \
					ft_strnew_test.c \
					ft_strdel_test.c\
					ft_strclr_test.c \
					ft_striter_test.c \
					ft_striteri_test.c \
					ft_strmap_test.c \
					ft_strmapi_test.c \
					ft_strequ_test.c \
					ft_strnequ_test.c \
					ft_strsub_test.c \
					ft_strjoin_test.c \
					ft_strtrim_test.c \
					ft_strsplit_test.c \
					ft_itoa_test.c \
					ft_putchar_test.c \
					ft_putstr_test.c \
					ft_putendl_test.c \
					ft_putnbr_test.c \
					ft_putchar_fd_test.c \
					ft_putstr_fd_test.c \
					ft_putendl_fd_test.c \
					ft_putnbr_fd_test.c \
					ft_lstnew_test.c \
					ft_lstdelone_test.c \
					ft_lstdel_test.c \
					ft_lstmap_test.c \

all: clean
	$(CC) $(FLAGS) ../libft/*.c *.c *h

clean:
	rm -f *.o *.gch ./a.out

fclean: clean
	rm -rf

re: fclean all
