ABC.exe:main.o big2.o fact.o rev.o palin.o
	gcc -o ABC.exe main.o big2.o fact.o rev.o palin.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
rev.o:rev.c
	gcc -c rev.c
palin.o:palin.c
	gcc -c palin.c
