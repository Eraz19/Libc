#######################################
#          		Variable	          #
#######################################

CC=		gcc
CFLAGS= -Wextra -Wall -Wpedantic
INCLUDE=-I$(HDRPATH)
LIBLINK=-L$(LIBPATH) -lft
LIB=	libft.a

OKGREEN = "\033[92m"
RESET = "\033[0m"



SRCPATH=	./src/
OBJPATH=	./obj/
HDRPATH=	./hdr/
LIBPATH=	./lib/

CHARDIR= 	$(SRCPATH)libft_char/
SRCCHAR= 	$(shell ls $(CHARDIR))

CONVERTDIR= $(SRCPATH)libft_convert/
SRCCONVERT=	$(shell ls $(CONVERTDIR))

IODIR= 		$(SRCPATH)libft_io/
SRCI0= 		$(shell ls $(IODIR))

LISTDIR= 	$(SRCPATH)libft_list/
SRCLIST= 	$(shell ls $(LISTDIR))

MATHDIR= 	$(SRCPATH)libft_math/
SRCMATH= 	$(shell ls $(MATHDIR))

MEMORYDIR= 	$(SRCPATH)libft_memory/
SRCMEMORY= 	$(shell ls $(MEMORYDIR))

STRINGDIR= 	$(SRCPATH)libft_string/
SRCSTRING= 	$(shell ls $(STRINGDIR))

SRCS=		$(addprefix $(CHARDIR), 	$(SRCCHAR))		\
			$(addprefix $(CONVERTDIR), 	$(SRCCONVERT))	\
			$(addprefix $(IODIR), 		$(SRCIO))		\
			$(addprefix $(LISTDIR), 	$(SRCLIST))		\
			$(addprefix $(MATHDIR), 	$(SRCMATH))		\
			$(addprefix $(MEMORYDIR), 	$(SRCMEMORY))	\
			$(addprefix $(STRINGDIR), 	$(SRCSTRING))	\

OBJS= 		${SRCS:$(SRCPATH)%.c=$(OBJPATH)%.o}

#######################################
#          	Main Build Rules	      #
#######################################

all: $(LIB)

$(LIB):	$(OBJS)
	@printf "link "$@"\n"
	@ar rcs $@ $^

$(OBJPATH)%.o: $(SRCPATH)%.c
	@printf "compile "$@" => "
	@mkdir -p $(@D)
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDE)
	@printf $(OKGREEN)"OK!"$(RESET)"\n"

clean:
	@rm -rf $(OBJPATH)

fclean: clean
	@rm $(LIB)

reclean: fclean all
