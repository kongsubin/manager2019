CC = gcc
CFLAGS = -W -Wall
TARGET = manager
OBJECTS = main.o user.o menu.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean : 
	rm *.o manager

