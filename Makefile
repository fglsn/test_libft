CC = gcc
FLAGS = -Wall -Wextra -Werror

FUNCTIONS = ../libft/ft_memset.c \
					../libft/ft_bzero.c \
					../libft/ft_memcpy.c \
					../libft/ft_memccpy.c \
					../libft/ft_memmove.c \
					../libft/ft_memchr.c \
					../libft/ft_memcmp.c \
					../libft/ft_strlen.c \
					../libft/ft_strdup.c \
					../libft/ft_strcpy.c \
					../libft/ft_strncpy.c \
					../libft/ft_strcat.c \
					../libft/ft_strncat.c \
					../libft/ft_strlcat.c \
					../libft/ft_strchr.c \
					../libft/ft_strrchr.c \
					../libft/ft_strstr.c \
					../libft/ft_strnstr.c \
					../libft/ft_strcmp.c \
					../libft/ft_strncmp.c \
					../libft/ft_atoi.c \
					../libft/ft_isalpha.c \
					../libft/ft_isdigit.c \
					../libft/ft_isalnum.c \
					../libft/ft_isascii.c \
					../libft/ft_isprint.c \
					../libft/ft_toupper.c \
					../libft/ft_tolower.c \
					../libft/ft_memalloc.c \
					../libft/ft_memdel.c \
					../libft/ft_strnew.c \
					../libft/ft_strdel.c\
					../libft/ft_strclr.c \
					../libft/ft_striter.c \
					../libft/ft_striteri.c \
					../libft/ft_strmap.c \
					../libft/ft_strmapi.c \
					../libft/ft_strequ.c \
					../libft/ft_strnequ.c \
					../libft/ft_strsub.c \
					../libft/ft_strjoin.c \
					../libft/ft_strtrim.c \
					../libft/ft_strsplit.c \
					../libft/ft_itoa.c \
					../libft/ft_putchar.c \
					../libft/ft_putstr.c \
					../libft/ft_putendl.c \
					../libft/ft_putnbr.c \
					../libft/ft_putchar_fd.c \
					../libft/ft_putstr_fd.c \
					../libft/ft_putendl_fd.c \
					../libft/ft_putnbr_fd.c

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
					ft_putnbr_fd_test.c

# OBJECTS = $(FUNCTIONS:.c=.o)
# TESTOBJ = $(TESTS:.c=.o)

# $(NAME):
# 	$(CC) $(FLAGS) -c $(FUNCTIONS) $(TESTS)
# 	ar rc $(NAME) $(OBJECTS)
# 	ranlib $(NAME)

all:
	$(CC) $(FLAGS) $(FUNCTIONS) $(TESTS) main.c *h

clean:
	rm -f $(OBJECTS) $(TESTOBJ) *gch *o ./a.out

fclean: clean
	rm -rf $(NAME)

re: fclean all
