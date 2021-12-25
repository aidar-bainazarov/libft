# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 15:57:17 by hkimberl          #+#    #+#              #
#    Updated: 2021/10/24 17:54:26 by hkimberl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memmove.c ft_strlen.c ft_atoi.c ft_memset.c ft_strmapi.c ft_bzero.c \
	   ft_putchar_fd.c ft_strncmp.c ft_calloc.c ft_putendl_fd.c ft_strnstr.c \
	   ft_isalnum.c ft_putnbr_fd.c ft_strrchr.c ft_isalpha.c ft_putstr_fd.c \
	   ft_strtrim.c ft_isascii.c ft_split.c ft_substr.c ft_isdigit.c ft_strchr.c \
	   ft_tolower.c ft_isprint.c ft_strdup.c ft_toupper.c ft_itoa.c ft_striteri.c \
	   ft_memchr.c ft_strjoin.c ft_memcmp.c ft_strlcat.c ft_memcpy.c ft_strlcpy.c

NAME 	=	libft.a
HEADER	=	libft.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all		: 	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re		: fclean all
