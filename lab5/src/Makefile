all: main.o weapon.o
	g++ -Wall -Werror -Wextra main.o weapon.o -o ..\build\main
	nmake clean

main.o: main.cpp
	g++ -c main.cpp

weapon.o: weapon.cpp
	g++ -c weapon.cpp

clean:
	DEL *.ilk *.obj *.pdb vc140.pdb *.exe *.o

clean build:
	DEL ..\build\main.exe
