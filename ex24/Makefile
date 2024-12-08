CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SCRDIR = srcs
INCDIR = includes
LIBDIR = ex24
SCRS = $(SCRDIR)/ft_putchar.c $(SCRDIR)/ft_putstr.c $(SCRDIR)/ft_strcmp.c $(SCRDIR)/ft_strlen.c $(SCRDIR)/ft_swap.c 
OBJS = $(SCRS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
