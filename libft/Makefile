TARGET = libft.a

files = ft_strlen ft_atoi ft_substr ft_strjoin \
ft_strtrim ft_split ft_bzero ft_isalnum \
ft_isalpha ft_isascii ft_isdigit ft_isprint \
ft_memcpy ft_memmove ft_memset ft_putnbr_fd \
ft_strlcpy ft_striteri ft_memchr ft_strrchr \
ft_strchr ft_tolower ft_toupper ft_strncmp \
ft_strlcat ft_strmapi ft_memcmp ft_calloc \
ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_lstadd_front \
ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
ft_lstclear ft_lstiter ft_lstmap ft_lstnew

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

debug: CFLAGS += -g3
debug: all bonus

sanitize: CFLAGS += -fsanitize=address -g3
sanitize: all bonus

.PHONY: all, clean, fclean, re, bonus