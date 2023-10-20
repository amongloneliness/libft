#*******************************************************************#
#																	#
#		Header: libft.a												#
#		Description: library for working with strings and arrays	#
#													  				#
#*******************************************************************#

NAME := libft.a
CFLAGS := ${CFLAGS} -Wall -Wextra -Werror -c
CC := gcc
SRCS := srcs/
HEADER := -I includes/
CFILES := ft_memset.c	\
		ft_strrchr.c	\
		ft_bzero.c		\
		ft_strnstr.c	\
		ft_memcpy.c		\
		ft_strncmp.c	\
		ft_memccpy.c	\
		ft_atoi.c		\
		ft_memmove.c	\
		ft_isalpha.c	\
		ft_memchr.c		\
		ft_isdigit.c	\
		ft_memcmp.c		\
		ft_isalnum.c	\
		ft_strlen.c		\
		ft_isascii.c	\
		ft_strlcpy.c	\
		ft_isprint.c 	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_strchr.c		\
		ft_tolower.c	\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c
		
SRCS_CFILES := $(addprefix $(SRCS), $(CFILES))
SRCS_OFILES	:= $(SRCS_CFILES:.c=.o)
LIB_COMPILATION := ar r

all: obj $(NAME)

obj: $(SRCS_CFILES)

$(SCRS)%.o: $(SCRS)%.c 
		$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(NAME): $(SRCS_OFILES)
	$(LIB_COMPILATION) $(NAME) $(SRCS_OFILES)

clean: 
	rm -f $(SRCS_OFILES)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
