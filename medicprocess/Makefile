CFLAGS=-Wall -O3 -g -Wextra -Wno-unused-parameter
OBJS = medicprocess.o brain.o brulures.o frond.o genoux.o tumeur.o visage.o 
ENGINE_DIR = ../engine

all: medicprocess.a

medicprocess.a: $(OBJS)
	ar rcs $@ $^

%.o : %.c
	$(CC) -I$(ENGINE_DIR) $(CFLAGS) -c -o $@ $<

# recipe to clean the workspace
clean:
	rm -f $(EXEC) $(OBJS)

.PHONY: all
