# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 17:50:31 by junseyun          #+#    #+#              #
#    Updated: 2024/03/15 16:34:27 by junseyun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifdef BONUS_FLAG
RE_OBJ = $(OBJS) $(BONUS_OBJS)
else
RE_OBJ = $(OBJS)
endif


TARGET = libft.a

CC_SO = clang
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

FILES = ft_isalpha.c ft_toupper.c ft_isdigit.c ft_tolower.c \
        ft_isalnum.c ft_strchr.c ft_isascii.c ft_strrchr.c \
        ft_isprint.c ft_strncmp.c ft_strlen.c ft_memchr.c \
        ft_memset.c ft_memcmp.c ft_bzero.c ft_strnstr.c \
        ft_memcpy.c ft_atoi.c ft_memmove.c ft_strlcpy.c \
        ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c \
        ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
        ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
        ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(FILES:.c=.o)

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c

BONUS_OBJS = $(BONUS_FILES:.c=.o)

all: $(TARGET)

$(TARGET): $(RE_OBJ)
		$(AR)	$@	$^

clean:
		$(RM)	$(OBJS)	$(BONUS_OBJS)

fclean:    clean
		$(RM)	$(TARGET)

re:        fclean $(TARGET)

bonus:	$(OBJS)	$(BONUS_OBJS)
	$(AR)	$(TARGET)	$(OBJS)	$(BONUS_OBJS)
	make	BONUS_FLAG=1	all

so:
	$(CC_SO) -nostartfiles -fPIC $(CFLAGS) $(OBJS) $(BONUS_OBJS)
	$(CC_SO) -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)

.PHONY:	all	clean	fclean	re	bonus
