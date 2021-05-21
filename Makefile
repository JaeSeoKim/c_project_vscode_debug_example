NAME = libtest.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAGS = -Wall -Werror -Wextra

ifeq ($(DEBUG),true)
CFLAGS += -g
endif

INCLUDES = libtest.h
CFLAGS += -I $(INCLUDES)

SRCS = ft_add42.c ft_helloworld.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(INCLUDES)
	$(AR) $(ARFLAGS) $@ $(OBJS)

.PHONY: all clean fclean re
