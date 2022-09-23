all:
	cl /utf-8 /std:c++latest /Z7 /EHsc /D_WIN32 /D_DEBUG /Od /MTd main.cpp
	move main.exe ../build

clean:
	DEL main.ilk *.obj main.pdb vc140.pdb main.exe

clean build:
	DEL ..\build\main.exe
