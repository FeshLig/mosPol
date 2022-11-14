all: task1 task2 task3 task4

task1: task1.o
	g++ -Wall -Werror -Wextra task1.o -o ..\build\task1
	nmake clean

task1.o: task1.cpp
	g++ -c task1.cpp

task2: task2.o
	g++ -Wall -Werror -Wextra task2.o -o ..\build\task2
	nmake clean

task2.o: task2.cpp
	g++ -c task2.cpp

task3: task3.o
	g++ -Wall -Werror -Wextra task3.o -o ..\build\task3
	nmake clean

task3.o: task3.cpp
	g++ -c task3.cpp

task4: task4.o
	g++ -Wall -Werror -Wextra task4.o -o ..\build\task4
	nmake clean

task4.o: task4.cpp
	g++ -c task4.cpp

settings.o: settings.cpp
	g++ -c settings.cpp

clean:
	DEL *.ilk *.obj *.pdb vc140.pdb *.exe *.o

clean build:
	DEL ..\build\*.exe
