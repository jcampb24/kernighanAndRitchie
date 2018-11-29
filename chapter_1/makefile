.phony: all, clean

all: ex1.01.log ex1.02.log ex1.03.log ex1.04.log ex1.05.log ex1.06.log ex1.07.log ex1.08.log ex1.09.log ex1.10.log ex1.12.log ex1.13.log ex1.13.vertical.log ex1.14.log ex1.15.log ex1.16.log ex1.17.log ex1.18.log ex1.19.log ex1.20.log ex1.21.log

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

ex1.08.log: ex1.08.c thePrince.txt
	@echo "Completing Exercise 8."
	-$(CC) -ansi ex1.08.c -o ex1.08.out
	-./ex1.08.out < thePrince.txt > ex1.08.log

ex1.09.log: ex1.09.c
	@echo "Completing Exercise 9."
	-$(CC) -ansi ex1.09.c -o ex1.09.out
	echo "This   is a        test      message." | ./ex1.09.out > ex1.09.log

ex1.10.log: ex1.10.c ex1.10.input.txt
	@echo "Completing Exercise 10."
	-$(CC) -ansi ex1.10.c -o ex1.10.out
	-./ex1.10.out < ex1.10.input.txt > ex1.10.log

ex1.12.log: ex1.12.c ex1.12.input.txt
	@echo "Completing Exercise 12."
	-$(CC) -ansi ex1.12.c -o ex1.12.out
	-./ex1.12.out < ex1.12.input.txt > ex1.12.log

ex1.13.log: ex1.13.c thePrince.txt
	@echo "Completing Exercise 13."
	-$(CC) -ansi ex1.13.c -o ex1.13.out
	-./ex1.13.out < thePrince.txt > ex1.13.log

ex1.13.vertical.log: ex1.13.vertical.c thePrince.txt
	@echo "Completing vertical challenge of Exercise 13."
	-$(CC) -ansi ex1.13.vertical.c -o ex1.13.vertical.out
	-./ex1.13.vertical.out < thePrince.txt > ex1.13.vertical.log

ex1.14.log: ex1.14.c thePrince.txt
	@echo "Completing Exercise 14."
	-$(CC) -ansi ex1.14.c -o ex1.14.out
	-./ex1.14.out < thePrince.txt > ex1.14.log

ex1.15.log: ex1.15.c
	@echo "Completing Exercise 15."
	-$(CC) -ansi ex1.15.c -o ex1.15.out
	-./ex1.15.out > ex1.15.log

ex1.16.log: ex1.16.c thePrince.txt
	@echo "Completing Exercise 16."
	-$(CC) -ansi ex1.16.c -o ex1.16.out
	-./ex1.16.out < thePrince.txt > ex1.16.log

ex1.17.log: ex1.17.c thePrince.txt
	@echo "Completing Exercise 17."
	-$(CC) -ansi ex1.17.c -o ex1.17.out
	-./ex1.17.out < thePrince.txt > ex1.17.log

ex1.18.log: ex1.18.c thePrince.txt
	@echo "Completing Exercise 18."
	-$(CC) -ansi ex1.18.c -o ex1.18.out
	head thePrince.txt | ./ex1.18.out > ex1.18.log

#thePrince.txt starts with three seemingly invisible characters which get represented as question marks when printed in reverse. (I have checked that they are really there.) To avoid this unsightly outcome, we use the second ten lines of the text.
ex1.19.log: ex1.19.c thePrince.txt
	@echo "Completing Exercise 19."
	-$(CC) -ansi ex1.19.c -o ex1.19.out
	head -n 20 thePrince.txt | tail | ./ex1.19.out > ex1.19.log

ex1.20.log: ex1.20.c ex1.10.input.txt
	@echo "Completing Exercise 20."
	-$(CC) -ansi ex1.20.c -o ex1.20.out
	cat ex1.10.input.txt | ./ex1.20.out > ex1.20.log

ex1.21.log: ex1.21.c ex1.10.input.txt
	@echo "Completing Exercise 21."
	-$(CC) -ansi ex1.21.c -o ex1.21.out
	cat ex1.10.input.txt > ex1.21.log
	cat ex1.10.input.txt | ./ex1.21.out >> ex1.21.log

clean:
	-rm *.out *.log
	-rm ex1.02.c


