all: main.o tree.o
	g++ -Wall -Werror -Wextra main.o tree.o -o ..\build\main
	nmake clean

main.o: main.cpp
	g++ -c main.cpp

tree.o: tree.cpp
	g++ -c tree.cpp

clean:
	DEL *.ilk *.obj *.pdb vc140.pdb *.exe *.o

clean build:
	DEL ..\build\main.exe
