.phony: all, clean

all: ex1.01.log ex1.02.log ex1.03.log ex1.04.log ex1.05.log ex1.06.log ex1.07.log

ex1.01.log: ex1.01.c
	@echo "Completing Exercise 1."
	-$(CC) -ansi ex1.01.c -o ex1.01.out
	./ex1.01.out > ex1.01.log 

ex1.02.log: ex1.01.c
	@echo "Completing Exercise 2."
	#Replace newline sequence in printf with \c.
	cat ex1.01.c | sed s/n\"/c\"/ > ex1.02.c
	-$(CC) -ansi -w ex1.02.c -o ex1.02.out
	@echo "n -> c result" > ex1.02.log
	-./ex1.02.out >> ex1.02.log
	@echo "\n" >> ex1.02.log

	#Replace newline sequence in printf with \d.
	cat ex1.01.c | sed s/n\"/d\"/ > ex1.02.c
	-$(CC) -ansi -w ex1.02.c -o ex1.02.out
	@echo "n -> d result" >> ex1.02.log
	-./ex1.02.out >> ex1.02.log
	@echo "\n" >> ex1.02.log

	#Replace newline sequence in printf with \e.
	cat ex1.01.c | sed s/n\"/e\"/ > ex1.02.c
	-$(CC) -ansi -w ex1.02.c -o ex1.02.out
	@echo "n -> e result" >> ex1.02.log
	-./ex1.02.out >> ex1.02.log
	@echo "\n" >> ex1.02.log

	#Replace newline sequence in printf with \f.
	cat ex1.01.c | sed s/n\"/e\"/ > ex1.02.c
	-$(CC) -ansi -w ex1.02.c -o ex1.02.out
	@echo "n -> f result" >> ex1.02.log
	-./ex1.02.out >> ex1.02.log
	@echo "\n" >> ex1.02.log

	#Replace newline sequence in printf with \g.
	cat ex1.01.c | sed s/n\"/g\"/ > ex1.02.c
	-$(CC) -ansi -w ex1.02.c -o ex1.02.out
	@echo "n -> g result" >> ex1.02.log
	-./ex1.02.out >> ex1.02.log
	@echo "\n" >> ex1.02.log

	#Replace newline sequence in printf with \h.
	cat ex1.01.c | sed s/n\"/h\"/ > ex1.02.c
	-$(CC) -ansi -w ex1.02.c -o ex1.02.out
	@echo "n -> h result" >> ex1.02.log
	-./ex1.02.out >> ex1.02.log
	@echo "\n" >> ex1.02.log

	#Replace newline sequence in printf with \z.
	cat ex1.01.c | sed s/n\"/z\"/ > ex1.02.c
	-$(CC) -ansi -w ex1.02.c -o ex1.02.out
	@echo "n -> z result" >> ex1.02.log
	-./ex1.02.out >> ex1.02.log
	@echo "\n" >> ex1.02.log

ex1.03.log: ex1.03.c
	@echo "Completing Exercise 3."
	-$(CC) -ansi ex1.03.c -o ex1.03.out
	-./ex1.03.out > ex1.03.log

ex1.04.log: ex1.04.c
	@echo "Completing Exercise 4."
	-$(CC) -ansi ex1.04.c -o ex1.04.out
	-./ex1.04.out > ex1.04.log

ex1.05.log: ex1.05.c
	@echo "Completing Exercise 5."
	-$(CC) -ansi ex1.05.c -o ex1.05.out
	-./ex1.05.out > ex1.05.log

ex1.06.log: ex1.06.c
	@echo "Completing Exercise 6."
	-$(CC) -ansi ex1.06.c -o ex1.06.out
	-@echo "Test message." | ./ex1.06.out > ex1.06.log

ex1.07.log: ex1.07.c
	@echo "Completing Exercise 7."
	-$(CC) -ansi ex1.07.c -o ex1.07.out
	-@echo "Test message." | ./ex1.07.out > ex1.07.log

clean:
	-rm *.out *.log



