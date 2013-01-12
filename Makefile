all: isgraphical


isgraphical: isgraphical.c sort.o sort.h
	gcc -c isgraphical.c
	gcc -o isgraphical isgraphical.o sort.o


sort.o: sort.c
	gcc -c sort.c


clean: isgraphical.o sort.o
	rm isgraphical.o
	rm isgraphical
	rm sort.o
