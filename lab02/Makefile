#p: main.o swap.o
#	gcc -o p main.o swap.o
#main.o: main.c
#	gcc -c main.c
#swap.o: swap.c
#	gcc -c swap.c
#clean:
#	rm -rf *.o
CC = gcc
obj = main.o swap.o
src = main.c swap.c

p: $(obj)
	$(CC) -o p $(obj)

$(obj): $(src)
	$(CC) -c $(src)

clean:
	rm -rf *.o
