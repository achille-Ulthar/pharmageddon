CFLAGS=-Wall -O3 -g -Wextra -Wno-unused-parameter
OBJS = memes.o cow.o hazmat.o kabouter.o scoobydoo.o shoebodybop.o simpsonsA2.o southpark.o spongebob.o 
ENGINE_DIR = ../engine

all: memes.a

memes.a: $(OBJS)
	ar rcs $@ $^

%.o : %.c
	$(CC) -I$(ENGINE_DIR) $(CFLAGS) -c -o $@ $<

# recipe to clean the workspace
clean:
	rm -f $(EXEC) $(OBJS)

.PHONY: all
