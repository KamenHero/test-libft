# #VARIABLES
# KEY = VALUE

# #RULES

# target: prerequisites
# #	command_line

NAME = libft.a

GCC = cc

FLAGS = -Wall -Werror -Wextra

RM = rm

SRCS =  ft_atoi.c/
		ft_bzero.c/
		ft_isalnum.c/
		ft_isalpha.c/
		ft_isascii.c/
		ft_isdigit.c/
		ft_isprint.c/
		ft_memchr.c/
		ft_memcmp.c/
		ft_memmove.c/
		ft_memset.c/
		ft_strchr.c/
		ft_strlcat.c/
		ft_strlcpy.c/
		ft_strlen.c/
		ft_strncmp.c/
		ft_strnstr.c/
		ft_strrchr.c/
		ft_tolower.c/
		ft_toupper.c/


OBJ = $(SRCS(.c=.o))


all: $(NAME) 
	ar -r $(NAME)

$(NAME): 
	$(GCC) $(SRCS) -o $(NAME)

clean:
	rm $(OBJ)

fclean:
	rm $(NAME)

re:
	clean fclean

.phony: all clean fclean re
