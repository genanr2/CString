// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include <string>
#include <cstringt.h>
using namespace std;
#include "string.h"
#include <atlstr.h>
//#include "MySmart.h"
#include "StrauStrup.h"
//using namespace NIIAS;
/*
my_smart_ptr<SmartString> foo()
{
	auto t = my_smart_ptr<SmartString>(new SmartString(10));
	int a = 10 + 5;
	a += 5;
	return t;
}
void foo222(my_smart_ptr<SmartString> ex)
{
	ex->setA(5);
}
void foo333()
{
	my_smart_ptr<SmartString> a = foo();
	foo222(a);
}

typedef  my_smart_ptr<CString2> CString3;
*/
//typedef CTypedPtrList<CPtrList, CMyStruct*>CMyStructList;
//template <class T>class my_smart_ptr {}
template <size_t ArrayLength, typename SomeValueType> class Stringlass
{
public:
	SomeValueType SomeValue;
	SomeValueType SomeArray[ArrayLength];
};
/*
//typedef CTypedPtrList<CPtrList, CMyStruct*>CMyStructList;
typedef CArray <PropertyItem, PropertyItem&>TPropList;
typedef CTypedPtrMap <CMapStringToOb, CString, PropertyItem*>CMapStringToPropertyItem;
template <typename T> struct MyAlloc 
{
	typedef T value_type;
}
*/

int main()
{
	Stringlass<20, int> SomeVariable;
	SomeVariable.SomeValue = 25;
	SomeVariable.SomeArray[15] = 15;
//	my_smart_ptr<example>ddd;



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
	//	qs =qs + &qs1;
//	auto t = my_smart_ptr<CString2>(new CString2("The MyClass instance"));
	qs[2] = 'B';
	qs = "dsfds df dsf  dsfdsfdsf";
	std::cout << &qs << "\n";
//	delete &qs;
	qs1 = qs;
	char* aaaa=qs.Str();
	int abc = 1;
	//	qs.
//	qs.
	/*
	std::cout << "Hello World!\n";
	CString2 s("Hello");

//	foo333();

	std::cout << (LPCSTR)s.GetBuffer()<<"\n";
	CString2 s1 = s;
	CString2 s2 = s1;
	*s[1] = '1';
	char ch22 = *s[3];
	CString2 *s2222 = &s2;
	*s2[1] = 'Э';

	LPSTR asas = (LPSTR)"swdsdsadsad";
	CString2 cc("The MyClass instance");
	CString2 ccc = cc;
	cc.Foo();
	ccc.Foo();
	std::cout << "The MyClass instance has been invoked " << ccc.GetInvocations() << " times" << std::endl;

*/
/*
CString sss;
	char c[] = "бвгда";
	CString ss("Hello");
	int aaa=ss.GetLength();
	int b = 1;

	CString *ss2=new CString("Hello");

	ss2[0] = '5';

	(&ss)[0] = '5';

	int gl=ss.GetLength();
	std::cout << (ss.GetString()) << "  55" << "\n";
/*
	CString& ss1 = ss;
	CString& ss2 = ss1;
	CString *ss3 = &ss1;
	int bb = 55;
*/
	return 1;
}
