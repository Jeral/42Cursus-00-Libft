CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -c

NAME	= libft.a
HEAD	= libft.h
FILES	= ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_calloc.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_strdup.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_striteri.c \
		ft_split.c \
		ft_atoi.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \

FILES_BONUS = ft_lstnew.c \
			 	ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \

OBJ	= $(FILES:.c=.o)

OBJ_BONUS = $(FILES_BONUS:.c=.o)

all: $(NAME)

bonus:			$(OBJ) $(OBJ_BONUS)
				ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# First line (Name): (Object) ---> Prerequisite/
# Underneath ar rcs is command line to take source to run Name into Object
# and it all started in ----all------
