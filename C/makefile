CC     := gcc
CFLAGS := -Wall -Wextra -g

SRC := main.c
OBJ := $(SRC:.c=.o)

BIN ?= $(basename $(SRC))

.PHONY: all clean

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(BIN)
