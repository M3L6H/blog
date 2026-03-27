CC = gcc
CFLAGS = -Wall -Wextra -g
SRC_DIR = src
BIN_DIR = bin
TARGET = $(BIN_DIR)/cblog

SRCS = $(wildcard $(SRC_DIR)/*.c)

all: $(TARGET)

$(TARGET): $(SRCS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -rf $(BIN_DIR)
