all: main.o weapon.o other.o
	g++ -Wall -Werror -Wextra main.o weapon.o other.o -o ..\build\main
	nmake clean

main.o: main.cpp
	g++ -c main.cpp

weapon.o: weapon.cpp
	g++ -c weapon.cpp

other.o: other.cpp
	g++ -c other.cpp

clean:
	DEL *.ilk *.obj *.pdb vc140.pdb *.exe *.o

clean build:
	DEL ..\build\main.exe
