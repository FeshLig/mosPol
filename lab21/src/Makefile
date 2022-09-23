all:
	cl /utf-8 /std:c++latest /Z7 /EHsc /D_WIN32 /D_DEBUG /Od /MTd main.cpp
	move main.exe ../build

clean:
	DEL *.ilk *.obj *.pdb vc140.pdb *.exe

clean build:
	DEL ..\build\main.exe
