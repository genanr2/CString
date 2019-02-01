#include "pch.h"
#include <iostream>
#include <string>
#include <cstringt.h>
using namespace std;
#include "string.h"
#include <atlstr.h>
#include "StrauStrup.h"

int main()
{
	StringStr qs("Hello");
	std::cout << "Hello World!\n" << &qs << "\n";
	std::cout << &qs<<"\n";
	qs = "Hello2";
	StringStr qs1 = qs;
	StringStr qs2 = qs1;
	StringStr qs3 = qs2;
	StringStr qs4 = qs3;
	qs[1] = 'A';
	std::cout << &qs1 << "\n";
	std::cout << &qs2 << "\n";
	std::cout << &qs << "\n";
	qs[2] = 'B';
	qs = "dsfds df dsf  dsfdsfdsf";
	std::cout << &qs << "\n";
	qs1 = qs;
	const char* aaaa=qs.Str();
	return 1;
}
