TripleDES:main.o TripleDES.o
	gcc -o TripleDES main.o TripleDES.o
main.o:main.c TripleDES.h
	gcc -c main.c
TripleDES.o:TripleDES.c TripleDES.h
	gcc -c TripleDES.c
clean:
	rm TripleDES main.o TripleDES.o
