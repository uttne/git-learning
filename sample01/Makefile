main : main.o sub.o
	gcc -o main $^

main.o : main.c
	gcc -o main.o -c main.c

sub.o : sub.c
	gcc -o sub.o -c sub.c

clean :
	rm -f main main.o sub.o