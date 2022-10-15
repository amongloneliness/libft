# ***************************************************************** #
#													  				#
#	Makefile:														#
#																	#
#		Заголовок: 	libft.a											#
#		Описание:	библиотека работы со строками и памятью			#
#																	#
#	Содержание:														#
#	   _____________________________________________________		#
#	  |				 |										|		#
#	  |		ФАЙЛ	 |				СОДЕРЖАНИЕ			    |		#
#	  |______________|______________________________________|		#
#																	#
#		- ft_atoi.c 	- перевод строки в число.		  			#
#																	#
#		- ft_bzero.c 	- заполнение памяти необходимым 			#
#					   	  значением.								#
#																	#
#		- ft_calloc.c	- выделение памяти для динамической			#
#						  переменной.								#
#																	#
#		- ft_isalnum.c 	- проверка символа: алфавитный или 			#
#						  цифра.									#
#																	#
#		- ft_isalpha.c	- проверка символа на алфавитность.			#
#																	#
#		- ft_isascii.c	- проверка символа принадлежности			#
#						  кодировке ascii.							#
#																	#
#		- ft_isdigit.c	- проверка, что символ является цифрой.		#
#																	#
#		- ft_isprint.c	- проверка, что символ можно вывести		#
#						  в консоль.								#
#																	#
#		- ft_len_nbr.c 	- определяет количество цифр в числе		#
#						  и возвращает результат.					#
#																	#
#		- ft_memccpy.c	- копирование памяти из одного места в		#
#						  результирующее.							#
#													  				#
#		- ft_memchr.c	- поиск символа внутри массива данных и		#
#						  возвращает ссылку на него (или NULL,		#
#						  в ином случае).							#
#																	#
#		- ft_memcmp.c	- сравнение элементов массивов данных 		#
#						  и при наличии разницы выводит её.			#
#																	#
#		- ft_memcpy.c 	- копирование данных из одного массива		# 
#						  в другой.									#
#																	#
#		- ft_memmove.c	- копирование n байтов памяти из одного		#
#						  массива данных в другой.					#
#																	#
#		- ft_memset.c	- заполнение n байтов данных переданым		#
#						  значением.								#
#																	#
#		- ft_putchar.c	- вывод символа в консоль.					#
#																	#
#		- ft_putdigit.c	- вывод цифры (int) в консоль.				#
#																	#
#		- ft_putnbr.c	- посимвольный вывод числа (int) в 			#
#						  консоль.									#
#																	#
#		- ft_putstr.c	- вывод строки в консоль.					#
#																	#
#		- ft_strchr.c	- поиск символа в строке и возвращение		#
#						  ссылки на него.							#
#																	#
#		- ft_strcpy.c	- копирование одной строки в другую,		#
#						  включая символ завершения строки '\0'.	#
#																	#
#		- ft_strdup.c	- дублирование строки и её возвращение.		#
#																	#
#		- ft_strlcat.c	- объединение двух строк в одну.			#
#																	#
#		- ft_strlcpy.c	- копирование одной строки в другую.		#
#																	#
#		- ft_strlen.c	- вычисление и возращение длины строки.		#
#																	#
#		- ft_strncmp.c	- сравнение строк и возвращение разницы 	#
#						  различных символов.						#
#																	#
#		- ft_strnlen.c	- возращение размера сроки меньшего 		#
#						  переданного параметра.					#
#																	#
#		- ft_strnstr.c	- поиск подстроки внутри строки и возвра-	#
#						  щение ссылки на её первое вхождение.		#
#																	#
#		- ft_strrchr.c	- поиск символа внутри строки и возвращение	#
#						  ссылки на него.							#
#																	#
#		- ft_tolower.c	- приведение символа к прописному виду.		#
#																	#
#		- ft_toupper.c	- приведение символа к заглавному виду.		#
#																	#
# ***************************************************************** #

NAME := libft.a
CFLAGS := ${CFLAGS} -Wall -Wextra -Werror -c
CC := gcc
SRCS := ../libft/srcs/
HEADER := -I ../libft/includes/
CFILES := ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_len_nbr.c \
		ft_memccpy.c \
		ft_memchr.c	\
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c	\
		ft_putchar.c \
		ft_putdigit.c \
		ft_putnbr.c	\
		ft_putstr.c \
		ft_strchr.c	\
		ft_strcpy.c	\
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnlen.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c
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