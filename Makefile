# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: gzanarel <gzanarel@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/06/13 10:37:33 by gzanarel     #+#   ##    ##    #+#        #
#    Updated: 2019/03/28 15:27:31 by gzanarel    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libftprintf.a

SRC = srcs/ft_printf.c \
	srcs/libft/ft_itoa_base.c \
	srcs/libft/ft_putchar.c \
	srcs/libft/ft_putstr.c \
	srcs/libft/ft_strncpy.c \
	srcs/libft/ft_strlen.c \
	srcs/libft/ft_isdigit.c \
	srcs/libft/ft_strchr.c \
	srcs/libft/ft_strsub.c \
	srcs/ft_conv_char.c \
	srcs/ft_conv_sgnd.c \
	srcs/ft_conv_usgnd.c \
	srcs/ft_conv_pp.c \
	srcs/ft_flags.c \
	srcs/ft_display.c \
	srcs/ft_display_num.c \
	srcs/ft_display_char.c \
	srcs/ft_check.c \
	srcs/tools.c \
	srcs/ft_conversion.c \
	srcs/ft_conv_wchar.c \
	srcs/utils_w.c \
	srcs/utils_wc2.c \

HDR = include/ft_printf.h

CFLAGS = -Wall -Wextra -Werror

OBJ = $(patsubst srcs/%.c, objs/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\n\033[32;01mlibftprintf.a.. done !\033[00m\n"

objs/%.o:srcs/%.c $(HDR)
	@mkdir -p objs/
	@mkdir -p objs/libft/
	@gcc $(CFLAGS) -I $(HDR) -c -o $@ $<
objs/%.o:srcs/libft/%.c $(HDR)
	@gcc $(CFLAGS) -I $(HDR) -c -o $@ $<

.Phony: all

clean:
	@rm -rf objs/*.o
	@rm -rf objs/libft/*.o
	@rm -rf objs/
	@echo "\n\033[31;01mClean..\033[00m\n"

fclean: clean
	@rm -f $(NAME)
	@echo "\n\033[31;01mFclean..\033[00m\n"

re: fclean all
