.phony: all, clean

all: ex3.01.log

ex3.01.log: ex3.01.c ex3.01.comparison.c
	-$(CC) -ansi ex3.01.c -o ex3.01.out
	-$(CC) -ansi ex3.01.comparison.c -o ex3.01.comparison.out
	echo "Original binsearch:" > ex3.01.log
	-time (./ex3.01.comparison.out) 2>>ex3.01.log
	echo "Improved binsearch:" >> ex3.01.log
	-time (./ex3.01.out) 2>>ex3.01.log

clean:
	-rm *.log
	-rm *.out
