OBJS = main.o tool1.o tool2.o
CC = gcc
CFLAGES += -c -Wall -g

mytool:$(OBJS)
	$(CC) $(OBJS) -o mytool
main.o:main.c
	$(CC) main.c $(CFLAGES) -o main.o
tool1.o:tool1.c
	$(CC) tool1.c $(CFLAGES) -o tool1.o
tool2.o:tool2.c
	$(CC) tool2.c $(CFLAGES) -o tool2.o

clean:
	rm *.o mytool -rf