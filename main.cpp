#include "Alloctor.h"
#include <iostream>

class Test 
{
	char buf[518];
};

int main()
{
	int* a = new int;
	delete a;

	Test* t = new Test();
	delete t;

	getchar();
	return 0;
}
