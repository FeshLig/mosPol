all: main.o tree.o avl_tree.o menu.o
	g++ -Wall -Werror -Wextra tree.o main.o menu.o avl_tree.o -o ..\build\main
	nmake clean

main.o: main.cpp
	g++ -c main.cpp

tree.o: tree.cpp
	g++ -c tree.cpp

avl_tree.o: avl_tree.cpp
	g++ -c avl_tree.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

clean:
	DEL *.ilk *.obj *.pdb vc140.pdb *.exe *.o

clean build:
	DEL ..\build\main.exe
