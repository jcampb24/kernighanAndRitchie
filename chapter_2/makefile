.phony: all, clean

all: ex2.1.log ex2.2.log ex2.3.log ex2.4.log ex2.5.log

ex2.1.log: ex2.1.c
	-$(CC) -ansi ex2.1.c -o ex2.1.out
	./ex2.1.out > ex2.1.log

ex2.2.log: ex2.2.c
	-$(CC) -ansi ex2.2.c -o ex2.2.out
	echo "My name is Clark."| ./ex2.2.out > ex2.2.log

ex2.3.log: ex2.3.c
	-$(CC) -ansi ex2.3.c -o ex2.3.out
	./ex2.3.out > ex2.3.log

ex2.4.log: ex2.4.c
	-$(CC) -ansi ex2.4.c -o ex2.4.out
	./ex2.4.out > ex2.4.log

ex2.5.log: ex2.5.c
	-$(CC) -ansi ex2.5.c -o ex2.5.out
	./ex2.5.out > ex2.5.log

clean:
	-rm *.log
	-rm *.out
