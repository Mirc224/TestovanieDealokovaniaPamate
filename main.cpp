#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include <iostream>

int main()
{
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	_CrtDumpMemoryLeaks();// pis na konci pred kazdym returnom
	return 0;
}