all: main.o errors.o
	g++ -Wall -Werror -Wextra main.o errors.o -o ..\build\main
	nmake clean

main.o: main.cpp
	g++ -c main.cpp

errors.o: errors.cpp
	g++ -c errors.cpp

clean:
	DEL *.ilk *.obj *.pdb vc140.pdb *.exe *.o

clean build:
	DEL ..\build\main.exe
