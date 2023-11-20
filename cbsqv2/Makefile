NAME		=	bsq
NAME_DEBUG	=	bsq_debug

CC			= 	cc
RM			= 	rm -rf

CFLAGS	=	-Wall -Werror -Wextra

MAKEFLAGS += --silent

SHELL := bash

B =		$(shell tput bold)
D =		$(shell tput sgr0)

SRCSPATH =	./src/
OBJSPATH =	./obj/
INC =		./lib/

SRCS =		$(wildcard $(SRCSPATH)*.c) $(wildcard $(SRCSPATH)**/*.c)
SRCSNAME =	$(subst $(SRCSPATH), , $(SRCS))

OBJSNAME =	$(SRCSNAME:.c=.o)
OBJS =		$(addprefix $(OBJSPATH), $(OBJSNAME))

define	progress_bar
	@i=0
	@while [[ $$i -le $(words $(SRCS)) ]] ; do \
		printf " " ; \
		((i = i + 1)) ; \
	done
	@printf "$(B)]\r[$(D)"
endef

all:		launch $(NAME)
	@printf "\n$(B)$(D)$(NAME) compiled$(D)\n"

launch:
	$(call progress_bar)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJSPATH)%.o: $(SRCSPATH)%.c
	@mkdir -p $(dir $@) # 2> /dev/null || true
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
	@printf "█"

debug:
	@make CFLAGS+=-DDEBUG=1 NAME=$(NAME_DEBUG)


clean:
	@$(RM) $(OBJSPATH)
	@echo "$(B)Cleared$(D)"


fclean:		clean
	@$(RM) $(OBJSPATH)
	@$(RM) $(NAME) $(NAME_DEBUG)

re:			fclean all

.PHONY: all clean fclean re launch debug test