# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egreen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/11 15:32:56 by egreen            #+#    #+#              #
#    Updated: 2017/10/16 08:39:01 by egreen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = fillit
SRCDIR = ./srcs/
LIBDIR = ./libft/
FILE_1 = main mod validswitch ft_remove_newline tet_all
FILE_2 = ft_split ft_strndup solver which_tet which_clear_tet free_grid
FILE_3 = ft_trimdots ft_checktets dothashthing new_grid print_grid
FILE_4 = tet_length ft_placetet16 ft_placetet17 ft_placetet18 ft_placetet19 
FILE_5 = ft_placetet1 ft_placetet2 ft_placetet3 ft_placetet4 ft_placetet5
FILE_6 = ft_placetet6 ft_placetet7 ft_placetet8 ft_placetet9 ft_placetet10
FILE_7 = ft_placetet11 ft_placetet12 ft_placetet13 ft_placetet14 ft_placetet15
FILES = $(FILE_1) $(FILE_2) $(FILE_3) $(FILE_4) $(FILE_5) $(FILE_6) $(FILE_7)
HEADERS = libft.h fillit.h
SRCS = $(addprefix $(SRCDIR), $(patsubst %, %.c, $(FILES)))
OBJS = $(patsubst %, %.o, $(FILES))
FLAGS = -Wall -Werror -Wextra
LIB = -L$(LIBDIR) -lft

all: $(NAME)

$(OBJS): $(SRCS)
	@gcc $(FLAGS) -c $(SRCS) -g

$(NAME): $(OBJS) $(LIBDIR)
	@$(MAKE) -C $(LIBDIR)
	@gcc $(OBJS) $(LIB) -o $(NAME)

clean:
	@$(MAKE) clean -C $(LIBDIR)
	@rm -rf $(OBJS)

fclean:
	@$(MAKE) clean
	@$(MAKE) fclean -C $(LIBDIR)
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all
