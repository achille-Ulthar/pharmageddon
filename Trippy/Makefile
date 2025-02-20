CFLAGS=-Wall -O3 -g -Wextra -Wno-unused-parameter
OBJS = trippy.o techno01.o techno02.o techno03.o techno04.o techno05.o techno06.o techno07.o 
ENGINE_DIR = ../engine

all: trippy.a

trippy.a: $(OBJS)
	ar rcs $@ $^

%.o : %.c
	$(CC) -I$(ENGINE_DIR) $(CFLAGS) -c -o $@ $<

.PHONY: all
