SRCS 	=	ft_itoa_pfu.c\
			ft_printf.c\
			ft_putchar_pf.c\
			ft_puthex.c\
			ft_putnbr_pf.c\
			ft_putnbr_pfu.c\
			ft_putptr.c\
			ft_putstr_pf.c\

OBJS 	= 	$(SRCS:.c=.o)
NAME 	= 	libftprintf.a
CC 		= 	cc
RM		=	rm -f
CFLAGS 	= 	-Wall -Wextra -Werror

.c.o:
			$(CC) -c $(CFLAGS) $(SRCS)

$(NAME):	$(OBJS)
			make -C ./libft
			cp ./libft/libft.a ./libftprintf.a
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:		
			make clean -C ./libft
			$(RM) $(OBJS)

fclean: 	clean
			make fclean -C ./libft
			$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
