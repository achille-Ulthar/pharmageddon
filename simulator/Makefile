# A simple Makefile for compiling small SDL projects

# set the compiler
CC := clang

medicprocess_DIR = ../medicprocess
ENGINE_DIR = ../engine

CFLAGS := `sdl2-config --cflags` -ggdb3 -O0 --std=c99 -Wall -I $(medicprocess_DIR) -I $(ENGINE_DIR)
LDFLAGS := `sdl2-config --libs` -lSDL2_mixer -lm -lassimp

# add header files here
HDRS := $(medicprocess_DIR)/medicprocess.h

# add source files here
SRCS := main.c

# generate names of object files
OBJS := $(SRCS:.c=.o) $(medicprocess_DIR)/medicprocess.a $(ENGINE_DIR)/engine.a

# name of executable
EXEC := medicprocess

# default recipe
all: $(EXEC)

$(medicprocess_DIR)/medicprocess.a: FORCE
	$(MAKE) -C $(medicprocess_DIR)

$(ENGINE_DIR)/engine.a: FORCE
	$(MAKE) -C $(ENGINE_DIR)

# recipe for building the final executable
$(EXEC): $(OBJS) $(HDRS) Makefile
	$(CC) -o $@ $(OBJS) $(CFLAGS) $(LDFLAGS)

# recipe for building object files
#$(OBJS): $(@:.o=.c) $(HDRS) Makefile
#    $(CC) -o $@ $(@:.o=.c) -c $(CFLAGS)

# recipe to clean the workspace
clean:
	rm -f $(EXEC) $(OBJS)

.PHONY: all clean FORCE
