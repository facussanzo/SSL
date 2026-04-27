CC      := gcc
CFLAGS  := -std=c23 -Wall -Wextra -pedantic
TARGET  := hello

all: $(TARGET)

$(TARGET): hello.c
	$(CC) $(CFLAGS) -o $@ $<

run: $(TARGET)
	./$(TARGET)

output: $(TARGET)
	./$(TARGET) > output.txt

clean:
	rm -f $(TARGET)

.PHONY: all run output clean