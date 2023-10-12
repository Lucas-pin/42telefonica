# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 11:22:27 by lpin              #+#    #+#              #
#    Updated: 2023/10/12 13:42:05 by lpin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
	  ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c\
	  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	  ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

#BONUS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			 ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS = $(SRCS:.c=.o)

#BONUS_OBJS = $(BONUS_SRCS:.c=.o)

NAME = libft.a

RM = rm -f

HEADER = libft.h

%o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $(SRCS)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

#ar [opciones] [nombre_archivo_biblioteca] [archivos_objeto]
#ar: crea, modifica y extrae archivos de biblioteca
#r: reemplaza el archivo de la biblioteca si ya existe
#c: crea la biblioteca si no existe
#s: crea un índice de símbolos en la biblioteca

.PHONY: clean fclean bonus re
#.PHONY: indica que clean, fclean y re no son archivos
#que se van a crear, sino que son acciones

#bonus: $(BONUS_OBJS) $(HEADER)
#	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) 
#$(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all 
#re: Genera un rebuild del objetivo