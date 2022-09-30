main1:
	cl /utf-8 /std:c++latest /Z7 /EHsc /D_WIN32 /D_DEBUG /Od /MTd main1.cpp
	move main1.exe ../build

main2:
	cl /utf-8 /std:c++latest /Z7 /EHsc /D_WIN32 /D_DEBUG /Od /MTd main2.cpp
	move main2.exe ../build

clean:
	DEL *.ilk *.obj *.pdb vc140.pdb *.exe

clean build:
	DEL ..\build\main.exe
