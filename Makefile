# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 10:09:46 by yuuko             #+#    #+#              #
#    Updated: 2024/03/22 22:05:15by yuuko            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a

SRC_DIR		:=	src
BUILD_DIR	:=	build

# List all source files according to the norm at 42
SRCS		:=	\
	ft_ctype/ft_isupper.c \
	ft_ctype/ft_islower.c \
	ft_ctype/ft_isalpha.c \
	ft_ctype/ft_isdigit.c \
	ft_ctype/ft_isalnum.c \
	ft_ctype/ft_isascii.c \
	ft_ctype/ft_isprint.c \
	ft_ctype/ft_isspace.c \
	ft_ctype/ft_toupper.c \
	ft_ctype/ft_tolower.c \
	\
	ft_string/ft_strlen.c \
	ft_string/ft_memset.c \
	ft_string/ft_bzero.c \
	ft_string/ft_memcpy.c \
	ft_string/ft_memmove.c \
	ft_string/ft_strlcpy.c \
	ft_string/ft_strlcat.c \
	ft_string/ft_strchr.c \
	ft_string/ft_strrchr.c \
	ft_string/ft_strcspn.c \
	ft_string/ft_strncmp.c \
	ft_string/ft_memchr.c \
	ft_string/ft_memcmp.c \
	ft_string/ft_strnstr.c \
	ft_string/ft_strdup.c \
	ft_string/extra/ft_memclear.c \
	ft_string/extra/ft_substr.c \
	ft_string/extra/ft_strjoin.c \
	ft_string/extra/ft_strtrim.c \
	ft_string/extra/ft_split.c \
	ft_string/extra/ft_strmapi.c \
	ft_string/extra/ft_striteri.c \
	\
	ft_stdlib/ft_atoi.c \
	ft_stdlib/ft_atoll.c \
	ft_stdlib/ft_calloc.c \
	ft_stdlib/ft_itoa.c \
	ft_stdlib/ft_abs.c \
	ft_stdlib/ft_llabs.c \
	ft_stdlib/extra/ft_atoi_base.c \
	ft_stdlib/extra/ft_itoa_base.c \
	ft_stdlib/extra/ft_mexpand.c \
	ft_stdlib/extra/ft_max.c \
	ft_stdlib/extra/ft_min.c \
	\
	ft_stdio/extra/ft_putchar_fd.c \
	ft_stdio/extra/ft_putstr_fd.c \
	ft_stdio/extra/ft_putendl_fd.c \
	ft_stdio/extra/ft_putnbr_fd.c \
	ft_stdio/extra/ft_putnbr_base_fd.c \
	ft_stdio/extra/ft_putchar.c \
	ft_stdio/extra/ft_putstr.c \
	ft_stdio/extra/ft_putendl.c \
	ft_stdio/extra/ft_putnbr.c \
	ft_stdio/extra/ft_putnbr_base.c \
	\
	ft_linkedlist/ft_lstnew.c \
	ft_linkedlist/ft_lstadd_front.c \
	ft_linkedlist/ft_lstaddcontent_front.c \
	ft_linkedlist/ft_lstsize.c \
	ft_linkedlist/ft_lstlast.c \
	ft_linkedlist/ft_lstadd_back.c \
	ft_linkedlist/ft_lstaddcontent_back.c \
	ft_linkedlist/ft_lstdelone.c \
	ft_linkedlist/ft_lstclear.c \
	ft_linkedlist/ft_lstiter.c \
	ft_linkedlist/ft_lstmap.c \
	\
	ft_arraylist/ft_arrnew.c \
	ft_arraylist/ft_arrfree.c \
	ft_arraylist/ft_arrsize.c \
	ft_arraylist/ft_arrat.c \
	ft_arraylist/ft_arradd.c \
	ft_arraylist/ft_arrdelat.c \
	ft_arraylist/ft_arrclear.c \
	\
	ft_stack/ft_stknew.c \
	ft_stack/ft_stkfree.c \
	ft_stack/ft_stksize.c \
	ft_stack/ft_stkisempty.c \
	ft_stack/ft_stkpeek.c \
	ft_stack/ft_stkpush.c \
	ft_stack/ft_stkpop.c \
	ft_stack/ft_stkswap.c \
	ft_stack/ft_stkrotate.c \
	ft_stack/ft_stkrrotate.c \

SRCS		:=	$(addprefix $(SRC_DIR)/, $(SRCS))
OBJS		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS		:=	$(OBJS:.o=.d)

CC			:=	cc
CFLAGS		:=	-Wall -Wextra -Werror
CPPFLAGS	:=	-I include -MMD -MP
AR			:=	ar
ARFLAGS		:=	-r -c -s

RM			:=	rm -f
MAKEFLAGS	+=	--no-print-directory

RED			:=	$(shell tput setaf 1)
GREEN		:=	$(shell tput setaf 2)
YELLOW		:=	$(shell tput setaf 3)
BLUE		:=	$(shell tput setaf 4)
MAGENTA		:=	$(shell tput setaf 5)
RESET		:=	$(shell tput sgr0)
TITLE		:=	$(YELLOW)$(basename $(NAME))$(RESET)
message		=	$(info [$(TITLE)] $(3)$(1)$(RESET) $(2))

ifdef WITH_DEBUG
	TITLE += $(MAGENTA)debug$(RESET)
	CFLAGS += -g
endif

ifdef WITH_SANITIZER
	TITLE += $(MAGENTA)sanitizer$(RESET)
	CFLAGS += -fsanitize=address
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(call message,CREATED,$(NAME),$(BLUE))

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	$(call message,CREATED,$(basename $(notdir $@)),$(GREEN))

clean:
	$(RM) -r $(BUILD_DIR)
	$(call message,DELETED,$(BUILD_DIR),$(RED))

fclean: clean
	$(RM) $(NAME)
	$(call message,DELETED,$(NAME),$(RED))

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
.SILENT:

-include $(DEPS)
