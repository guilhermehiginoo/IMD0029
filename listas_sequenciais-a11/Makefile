main: main.o lista.o
	gcc -Wall -Wextra -std=c11  main.o lista.o -o main  

main.o: main.c
	gcc -c main.c

lista.o: lista.c
	gcc -c lista.c

run: main
	./main

clean:
	rm -f main *.o
