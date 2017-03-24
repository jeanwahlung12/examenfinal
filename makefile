main:	seres.o marina.o piratas.o revolucionario.o fruta.o  zoan.o logia.o paramecia.o main.o
	g++ seres.o marina.o piratas.o revolucionario.o fruta.o  zoan.o logia.o paramecia.o main.o -o main

main.o:	main.cpp seres.h marina.h piratas.h revolucionario.h fruta.h  zoan.h logia.h paramecia.h
	g++ -c main.cpp 



seres.o:	seres.h seres.cpp 
	g++ -c seres.cpp

marina.o:	marina.h marina.cpp seres.h
	g++ -c marina.cpp

piratas.o:	piratas.h piratas.cpp seres.h
	g++ -c piratas.cpp

revolucionario.o:	revolucionario.h revolucionario.cpp seres.h
	g++ -c revolucionario.cpp

fruta.o:	fruta.h fruta.cpp
	g++ -c fruta.cpp

paramecia.o:	paramecia.h paramecia.cpp fruta.h
	g++ -c paramecia.cpp

zoan.o:	zoan.h zoan.cpp fruta.h
	g++ -c zoan.cpp

logia.o:	logia.h logia.cpp fruta.h
	g++ -c logia.cpp
