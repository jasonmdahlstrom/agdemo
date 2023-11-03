all: main.c add2.c
	gcc -o agdemo main.c add2.c

agdemo-test: testharness.o add2.c
	gcc -c add2.c
	gcc -o agdemo-test testharness.o add2.o
