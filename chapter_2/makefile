.phony: all, clean

all: ex2.1.log

ex2.1.log: ex2.1.c
	-$(CC) -ansi ex2.1.c -o ex2.1.out
	./ex2.1.out > ex2.1.log

clean:
	-rm *.log
	-rm *.out
