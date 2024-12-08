CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SCRS = ft_display_file.c
OBJS = $(SCRS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)