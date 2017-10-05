CC = g++
COMPILER_FLAGS = -g 
OBJ_NAME = game

all: build archive

clean: 
	rm *.o $(OBJ_NAME)

build: main.o game.o othello.o 
	$(CC) $(COMPILER_FLAGS) -o $(OBJ_NAME) main.o game.o othello.o

doc:
	doxygen Doxyfile
	rm -r latex/

main.o: main.cc game.h othello.h
	$(CC) -c main.cc

game.o: game.cc game.h
	$(CC) -c game.cc

othello.o: othello.cc othello.h
	$(CC) -c othello.cc
	
	
archive: 
	tar -czvf game.tar.gz *.cc *.o Makefile $(OBJ_NAME) 
