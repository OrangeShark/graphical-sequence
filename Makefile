all: isgraphical


isgraphical: isgraphical.c
	gcc -c isgraphical.c
	gcc -o isgraphical isgraphical.o

clean: isgraphical.o
	rm isgraphical.o
	rm isgraphical
