.phony: all, clean

all: ex3.01.log ex3.02.log ex3.03.log

ex3.01.log: ex3.01.c ex3.01.comparison.c
	@echo "Completing Exercise 3.1."
	-$(CC) -ansi ex3.01.c -o ex3.01.out
	-$(CC) -ansi ex3.01.comparison.c -o ex3.01.comparison.out
	echo "Original binsearch:" > ex3.01.log
	-time (./ex3.01.comparison.out) 2>>ex3.01.log
	echo "Improved binsearch:" >> ex3.01.log
	-time (./ex3.01.out) 2>>ex3.01.log

ex3.02.log: ex3.02.c
	@echo "Completing Exercise 3.2."
	-$(CC) -ansi ex3.02.c -o ex3.02.out
	-./ex3.02.out > ex3.02.log

ex3.03.log: ex3.03.c
	@echo "Completing Exercise 3.3."
	-$(CC) -ansi ex3.03.c -o ex3.03.out
	-./ex3.03.out > ex3.03.log

clean:
	-rm *.log
	-rm *.out
