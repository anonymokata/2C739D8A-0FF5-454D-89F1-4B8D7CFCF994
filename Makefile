
CC = gcc

.PHONY: build check clean

check: build suite.o
	${CC} -o check-roman suite.o roman.o -pthread -lrt -lcheck_pic -lm /usr/lib/x86_64-linux-gnu/libcheck.a -pthread -lrt -lm /usr/lib/x86_64-linux-gnu/libcheck_pic.a
	./check-roman

build: main.o
	${CC} roman.o main.o -o roman-calculator

main.o: roman.o src/main.c
	${CC} -I src -c src/main.c

roman.o: src/roman.c src/roman.h
	${CC} -I src -c src/roman.c

suite.o: test/suite.c roman.o
	${CC} -c test/suite.c 

clean:
	rm -rf *.o
	rm roman-calculator
	rm check-roman

