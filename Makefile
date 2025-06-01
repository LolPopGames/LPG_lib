# Directories
SRC_DIR = src
INC_DIR = inc
BUILD_DIR = build

# Library
LIB_NAME = liblpg
LIB_EXT = .a
LIB_FILE = $(BUILD_DIR)/$(LIB_NAME)$(LIB_EXT)

# Compiler and flags
CC = gcc
AR = ar rcs
CFLAGS = -Wall -Wextra -Iinc
DEBUG_FLAGS = -g3

# Sources
SRC := $(shell find src -name '*.c')
OBJ := $(patsubst src/%.c, build/%.o, $(SRC))

# Targets
all: $(LIB_FILE)

$(LIB_FILE): $(OBJ)
	$(AR) $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build

debug: CFLAGS += $(DEBUG_FLAGS)
debug: all

.PHONY: all clean debug