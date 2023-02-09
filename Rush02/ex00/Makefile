SRCS = *.c

CFLAGS = -Wall -Wextra -Werror

NAME_BUILD = -o rush-02

CC= cc $(CFLAGS)

default:
	$(CC) $(NAME_BUILD) $(SRCS)
fclean:
	find . -maxdepth 1 -type f -executable -exec rm {} +
