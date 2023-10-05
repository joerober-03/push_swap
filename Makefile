PUSH_SWAP =		push_swap
NAME =			$(PUSH_SWAP)
LIBFT_A =		libft.a

COMP =			gcc -Wall -Werror -Wextra -I includes -I libft/includes -I libft/libft -c -o

OBJ_DIR =		obj/
P_SRC_DIR =		src/
LIBFT =			libft/

P_SRC =			swap.c \
				push.c \
				rotate.c \
				rev_rotate.c \
				push_swap.c \
				insertion_sort.c \
				formating.c \
				separation.c \
				radix_sort.c \
				small_stack.c \
				algorithm.c \
				radix_formating.c \

P_OBJ =			$(P_SRC:%.c=%.o)
OBJ =			$(P_OBJ)

P_SRC_PATH =   	$(P_SRC:%=$(P_SRC_DIR)%)
SRC_PATH =		$(P_SRC_PATH)

P_OBJ_PATH =	$(addprefix $(OBJ_DIR), $(P_OBJ))
OBJ_PATH =		$(P_OBJ_PATH)

all:			color do_libft $(OBJ_DIR) $(NAME)
				@echo "\\n\033[32;1m PUSH_SWAP COMPLETE \033[0m \\n"

$(OBJ_DIR):
				@mkdir -p $(OBJ_DIR)
				@echo Create: Object directory

$(NAME):		$(OBJ_PATH)
				@gcc $(P_OBJ_PATH) *.a -o push_swap \
					-I includes -I libft/includes

$(P_OBJ_PATH):	$(P_SRC_PATH)
				@$(MAKE) $(P_OBJ)

$(P_OBJ):		$(LIBFT_A)
				@echo Create: $(@:obj/%=%)"\x1b[1A\x1b[M"
				@$(COMP) $(OBJ_DIR)$@ $(P_SRC_DIR)$(@:%.o=%.c)

do_libft:
				@make -C $(LIBFT)
				@cp $(LIBFT)/$(LIBFT_A) .

colour:
				@echo "\x1b[36m""\x1b[1A\x1b[M"

clean:			color
				@/bin/rm -rf $(OBJ_DIR) $(LIBFT_A)
				@make -C $(LIBFT) clean
				@echo "\\n\033[32;1m Cleaned libft object files \033[0m"

fclean:			clean
				@/bin/rm -f $(PUSH_SWAP) $(LIBFT_A)
				@make -C $(LIBFT) fclean
				@echo "\\n\033[32;1m Cleaned $(NAME) \033[0m \\n"

re: 			fclean all

.PHONY:			all clean flcean re color