.phony: all clean

all: ex4.01.log

ex4.01.log: ex4.01.c ex4.01.getline2.c ex4.01.strrindex.c ex4.01.input
	@echo "Completing Exercise 4.1."
	-$(CC) -ansi -c ex4.01.getline2.c
	-$(CC) -ansi -c ex4.01.strrindex.c
	-$(CC) -ansi -c ex4.01.c
	-$(CC)  ex4.01.o ex4.01.getline2.o ex4.01.strrindex.o -o ex4.01.out
	-./ex4.01.out < ex4.01.input > ex4.01.log

clean:
	-rm *.log
	-rm *.out
	-rm *.o
