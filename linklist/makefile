OBJS = main.o tool1.o tool2.o
CC = gcc
CFLAGES += -c -Wall -g

all:main
main:main.o list.o
	$(CC) $^ -o $@


clean:
	rm *.o mytool -rf