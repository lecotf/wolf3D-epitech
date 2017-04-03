##
## Made by Florian Lécot
## Email : <contact.florianlecot@gmail.com>
## 
## Started on  Tue Nov 15 11:36:02 2016 
## Last update Mon Apr  3 17:36:58 2017 
##

NAME		=	wolf3D

CC		=	gcc

RM		=	rm -f

COMPILEFLAGS	+=	-Wall -Wextra

INCLUDES	=	-I includes -I minilibx

LDFLAGS		=	-lmlx -Lminilibx -lX11 -lXext
LDFLAGS		+=	-lm

CFLAGS		=	$(COMPILEFLAGS) $(INCLUDES)

SRCPATH		=	srcs

SRCS		=	$(SRCPATH)/main.c		\
			$(SRCPATH)/set_data.c           \
			$(SRCPATH)/gere_keyboard.c      \
			$(SRCPATH)/move_position.c      \
			$(SRCPATH)/turn_head.c          \
			$(SRCPATH)/raycasting.c         \
			$(SRCPATH)/aff_font.c           \
			$(SRCPATH)/aff_wall.c           \
			$(SRCPATH)/color_world.c        \
			$(SRCPATH)/fov.c		\
			$(SRCPATH)/speed.c

OBJS		=	$(SRCS:.c=.o)

DEBUG		=	no

ifeq ($(DEBUG), yes)
CC		=	clang
COMPILEFLAGS	=	-Weverything -Wno-padded #voir Data Structure Alignment
LDFLAGS		+=	-g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
