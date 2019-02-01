#include "pch.h"
#include <iostream>
#include "StrauStrup.h"
StringStr::StringStr(const StringStr& r)
{
	r.rep->n++;
	rep = r.rep;
}
StringStr::~StringStr() 
{
	if (--rep->n == 0) 
		delete rep;
}
StringStr& StringStr::operator=(const char* p) 
{
	if (rep->n == 1)
		rep->Assign(strlen(p), p);
	else
	{
		rep->n--;
		rep = new StringData(strlen(p), p);
	}
	return *this;
}
StringStr& StringStr::operator=(StringStr& r)
{
	r.rep->n++;
	if (--rep->n == 0) delete rep;
	rep = r.rep;
	return *this;
}
StringStr::StringData::StringData(int nsz, const char* p)
{
	n = 1;
	sz = nsz;
	s = new char[sz + 1];
	strcpy_s(s, sz + 1,p);
}
StringStr::StringData* StringStr::StringData::GetOwnCopy()
{
	if (n == 1) return this;
	n--;
	return new StringData(sz, s);
}
void StringStr::StringData::Assign(int nsz, const char* p)
{
	if (nsz != sz)
	{
		delete[] s;
		sz = nsz;
		s = new char[sz + 1];
	}
	strcpy_s(s, sz + 1, p);
}
std::ostream& operator<<(std::ostream&os, const StringStr*Item)
{
	os << Item->rep->s;
	return os;
}

int StringStr::Length()
{
	return strlen(rep->s);
}
const char* StringStr::Str()
{
	return rep->s;
}
