.phony: all clean

all: ex4.01.log ex4.02.log ex4.03.log ex4.04.log

ex4.01.log: ex4.01.c ex4.01.getline2.c ex4.01.strrindex.c ex4.01.input
	@echo "Completing Exercise 4.1."
	-$(CC) -ansi -c ex4.01.getline2.c
	-$(CC) -ansi -c ex4.01.strrindex.c
	-$(CC) -ansi -c ex4.01.c
	-$(CC)  ex4.01.o ex4.01.getline2.o ex4.01.strrindex.o -o ex4.01.out
	-./ex4.01.out < ex4.01.input > ex4.01.log

ex4.02.log: ex4.02.c ex4.02.atof.c
	@echo "Completing Exercise 4.2."
	-$(CC) -ansi -c ex4.02.atof.c
	-$(CC) -ansi -c ex4.02.c
	-$(CC) ex4.02.o ex4.02.atof.o -o ex4.02.out
	-./ex4.02.out > ex4.02.log

ex4.03.log: ex4.03.c ex4.03.stack.c ex4.03.ch.c ex4.03.getop.c
	@echo "Completing Exercise 4.3."
	-$(CC) -ansi ex4.03.c ex4.03.stack.c ex4.03.ch.c ex4.03.getop.c -o ex4.03.out
	echo "15 6 %" | ./ex4.03.out > ex4.03.log
	echo "46.7 -.3 +" | ./ex4.03.out >> ex4.03.log

ex4.04.log: ex4.04.c ex4.04.stack.c ex4.03.ch.c ex4.03.getop.c
	@echo "Completing Exercise 4.4."
	-$(CC) -ansi ex4.04.c ex4.04.stack.c ex4.03.ch.c ex4.03.getop.c -o ex4.04.out
	echo "15 6 % =" | ./ex4.04.out > ex4.04.log
	echo "45.7 -.3 + =" | ./ex4.04.out >> ex4.04.log
	echo "98 57 ? "|./ex4.04.out >> ex4.04.log
	echo "98 57 $ ?" | ./ex4.04.out >> ex4.04.log
	echo "98 54 $ ? < ?" | ./ex4.04.out >> ex4.04.log

clean:
	-rm *.log
	-rm *.out
	-rm *.o
