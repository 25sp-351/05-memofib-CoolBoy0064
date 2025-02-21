CC = gcc
CFLAGS = -g -Wall -lm
LDFLAGS =
OBJFILES = fib.o memoize.o
TARGET = fib

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)