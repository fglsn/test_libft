CC = gcc
FLAGS = -Wall -Wextra -Werror

FUNCTIONS = src/ft_memset.c \
					src/ft_bzero.c \
					src/ft_memcpy.c \
					src/ft_memccpy.c \
					src/ft_memmove.c \
					src/ft_memchr.c \
					src/ft_memcmp.c \
					src/ft_strlen.c \
					src/ft_strdup.c \
					src/ft_strcpy.c \
					src/ft_strncpy.c \
					src/ft_strcat.c \
					src/ft_strncat.c \
					src/ft_strlcat.c \
					src/ft_strchr.c \
					src/ft_strrchr.c \
					src/ft_strstr.c \
					src/ft_strnstr.c \
					src/ft_strcmp.c \
					src/ft_strncmp.c \
					src/ft_atoi.c \
					src/ft_isalpha.c \
					src/ft_isdigit.c \
					src/ft_isalnum.c \
					src/ft_isascii.c \
					src/ft_isprint.c \
					src/ft_toupper.c \
					src/ft_tolower.c \
					src/ft_memalloc.c \
					src/ft_strnew.c \
					src/ft_strdel.c\
					src/ft_strclr.c \
					src/ft_striter.c \
					src/ft_striteri.c \
					src/ft_strmap.c \
					src/ft_strmapi.c \
					src/ft_strequ.c \
					src/ft_strnequ.c \
					src/ft_strsub.c \
					src/ft_strjoin.c \
					src/ft_strtrim.c \
					src/ft_strsplit.c \
					src/ft_itoa.c \
					src/ft_putchar.c \
					src/ft_putstr.c \
					src/ft_putendl.c \
					src/ft_putnbr.c \
					src/ft_putchar_fd.c \
					src/ft_putstr_fd.c \
					src/ft_putendl_fd.c \
					src/ft_putnbr_fd.c

TESTS = ft_memset_test.c \
					ft_bzero_test.c \
					ft_atoi_test.c \
					ft_isalnum_test.c \
					ft_isalpha_test.c \
					ft_isascii_test.c \
					ft_isprint_test.c \
					ft_isdigit_test.c \
					ft_memcpy_test.c \
					ft_memccpy_test.c \
					ft_memmove_test.c \
					ft_memchr_test.c \
					ft_memcmp_test.c \
					ft_strlen_test.c \
					ft_strdup_test.c \
					ft_strcpy_test.c \
#					ft_strncpy_test.c \
					ft_strcat_test.c \
					ft_strncat_test.c \
					ft_strlcat_test.c \
					ft_strchr_test.c \
					ft_strrchr_test.c \
					ft_strstr_test.c \
					ft_strnstr_test.c \
					ft_strcmp_test.c \
					ft_strncmp_test.c \
					ft_isalpha_test.c \
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
					ft_putnbr_fd_test.c #

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
