all: isgraphical


isgraphical: isgraphical.c sort.o sort.h graphical.o graphical.h
	gcc -c isgraphical.c
	gcc -o isgraphical isgraphical.o sort.o graphical.o


sort.o: sort.c
	gcc -c sort.c

graphical.o: graphical.c
	gcc -c graphical.c


clean: 
	rm isgraphical *.o
