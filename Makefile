# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 15:05:03 by lfourmau          #+#    #+#              #
#    Updated: 2021/02/17 10:00:39 by lfourmau         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_calloc.c srcs/ft_isalnum.c srcs/ft_isalpha.c \
	srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_isprint.c srcs/ft_itoa.c srcs/ft_memccpy.c \
	srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memset.c \
	srcs/ft_strchr.c srcs/ft_strdup.c srcs/ft_strjoin.c srcs/ft_strlcat.c \
	srcs/ft_strlcpy.c srcs/ft_strlen.c srcs/ft_strmapi.c srcs/ft_strncmp.c srcs/ft_strnstr.c \
	srcs/ft_strrchr.c srcs/ft_strtrim.c srcs/ft_substr.c srcs/ft_tolower.c srcs/ft_toupper.c \
	srcs/ft_putchar_fd.c srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c srcs/ft_putstr_fd.c srcs/ft_split.c \
   	srcs/ft_isspace.c srcs/ft_atoi_base.c srcs/ft_itoa_base.c \
	srcs/ft_putnbr_base.c srcs/get_next_line.c

SRCSBONUS = srcs/ft_lstnew.c srcs/ft_lstadd_front.c srcs/ft_lstsize.c srcs/ft_lstlast.c \
			srcs/ft_lstadd_back.c srcs/ft_lstdelone.c srcs/ft_lstclear.c srcs/ft_lstiter.c \
			srcs/ft_lstmap.c

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${SRCSBONUS:.c=.o}

RM = rm -f

_END = \033[0m
_DIM = \033[2m
_YELLOW = \033[33m
_GREEN = \033[92m
_RED = \033[91m
_ROSE = \033[95m
_CYAN = \033[96m

%.o : %.c incs/libft.h
	@echo "${_GREEN}${_DIM} ✅ SUCCESS ✅  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ${_END}${_YELLOW}| $< |${_END}"
	@${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${OBJS}
	@echo "${_GREEN} Action reussie pour  : ${_CYAN} $?"
	@ar -rc ${NAME} $?

all : ${NAME}

bonus : ${OBJSBONUS} ${OBJS}
	@echo "${_GREEN}Bonus ajoutes${_END}"
	@ar -rc ${NAME} ${OBJS} ${OBJSBONUS}

clean : 
	@echo "${_RED} Fichiers detruits${_END}"
	@${RM} ${OBJS} ${OBJSBONUS}

fclean : clean
	@${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
