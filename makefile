maj1: major1.o reverse.o replace.o palindrome.o power.o comp

major1.o:
	 gcc -c -Wall major1.c -lm

power.o: 
	 gcc -c -Wall power.c -lm

reverse.o:
	 gcc -c -Wall reverse.c -lm

replace.o:
	 gcc -c -Wall replace.c -lm

palindrome.o: 
	 gcc -c -Wall palindrome.c -lm

comp: 
	gcc -o binops major1.o reverse.o replace.o palindrome.o power.o -lm

clean:
	 rm -f *.o binops
