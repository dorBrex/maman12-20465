lists_ab: lists_ab.o get_data.o output.o
	gcc -g -Wall -ansi -pedantic lists_ab.o get_data.o output.o -o lists_ab -lm

lists_ab.o: lists_ab.c lists_ab.h get_data.h output.h
	gcc -c -Wall -ansi -pedantic lists_ab.c -o lists_ab.o

get_data.o: get_data.c get_data.h
	gcc -c -Wall -ansi -pedantic get_data.c -o get_data.o

output.o: output.c output.h
	gcc -c -Wall -ansi -pedantic output.c -o output.o -lm