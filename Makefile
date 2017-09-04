## COMPILATION
CC = gcc
CFLAGS = -Wall -Werror -Wextra

## FILES
# COLLEEN
COLLEEN_NAME = Colleen
COLLEEN_SRC = $(COLLEEN_NAME).c
COLLEEN_OBJ = $(addprefix $(OPATH), $(COLLEEN_SRC:.c=.o))

# GRACE
GRACE_NAME = Grace
GRACE_SRC = $(GRACE_NAME).c
GRACE_OBJ = $(addprefix $(OPATH), $(GRACE_SRC:.c=.o))

# SULLY
SULLY_NAME = Sully
SULLY_SRC = $(SULLY_NAME).c
SULLY_OBJ = $(addprefix $(OPATH), $(SULLY_SRC:.c=.o))

## DIRECTORIES
vpath %.c ./src
OPATH = ./obj/

## PROCESS
all: $(COLLEEN_NAME) $(GRACE_NAME) $(SULLY_NAME)

$(COLLEEN_NAME): $(COLLEEN_OBJ)
	@$(CC) $(CFLAGS) $(COLLEEN_OBJ) -o $@
	@echo "\033[0;31mColleen compilation done !\033[0;m"

$(GRACE_NAME): $(GRACE_OBJ)
	@$(CC) $(CFLAGS) $(GRACE_OBJ) -o $@
	@echo "\033[0;33mGrace compilation done !\033[0;m"

$(SULLY_NAME): $(SULLY_OBJ)
	@$(CC) $(CFLAGS) $(SULLY_OBJ) -o $@
	@echo "\033[0;32mSully compilation done !\033[0;m"

$(OPATH)%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(COLLEEN_OBJ) $(GRACE_OBJ) $(SULLY_OBJ)
	@echo "\033[0;32mObject files deleted !\033[0;m"

fclean: clean
	@rm -f $(COLLEEN_NAME) $(GRACE_NAME) $(SULLY_NAME)
	@echo "\033[0;32mExecutables deleted !\033[0;m"

re: fclean all
