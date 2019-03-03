## /*
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
## */

CC		=	gcc -g

CFLAGS		=	-Wextra -W -Wall -Wparentheses -Wsign-compare -Wpointer-sign -Wuninitialized -Wunused-but-set-variable

CFLAGS		=	-I ./include

RM		=	rm -f

SRCS 		=	main.c	\
			sources/lib.c	\
			sources/get_file.c	\
			sources/gestion_map.c	\
			sources/algo.c	\
			sources/get_info.c	\
			sources/display.c	\

OBJS 		=	$(SRCS:.c=.o)

NAME 		=	bsq	\

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
