# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 22:18:57 by bcausseq          #+#    #+#              #
#    Updated: 2024/10/19 05:51:03 by bcausseq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_itoa.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strcpy.c ft_strcat.c ft_strncmp.c ft_memcmp.c ft_calloc.c ft_lstclear.c ft_lstmap.c ft_substr.c ft_strtrim.c ft_split.c
OBJS = $(SRCS:.c=.o)
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c
BONUSOBJS = $(BONUS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS) 

bonus : $(NAME) $(BONUSOBJS)
	ar rs $(NAME) $(BONUSOBJS)

clean :
	rm -f $(OBJS) $(BONUSOBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
