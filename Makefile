CC = gcc

TARGET = farr

all: $(TARGET)

$(TARGET): main.c
	$(CC) -o $(TARGET) main.c

clean:
	rm $(TARGET)
