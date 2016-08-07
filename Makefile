
CC = gcc

build: main.o
	${CC} main.o -o roman-calculator

main.o: src/main.c
	${CC} -I . -c src/main.c

clean:
	rm -rf *.o
	rm roman-calculator

