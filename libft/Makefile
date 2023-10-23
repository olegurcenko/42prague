TARGET = libft.a

files = ft_strlen ft_atoi ft_substr ft_strjoin ft_strtrim ft_split ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memcpy ft_memmove ft_memset ft_strcat ft_strlcpy

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OUTPUT = $(TARGET)

CFILES = $(files:%=%.c)

OFILES = $(files:%=%.o)

NAME = $(OUTPUT)

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES) -I./
	ar -rc $(OUTPUT) $(OFILES)

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re