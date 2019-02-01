#pragma once
#include <cstring>
#include <iostream>
#ifndef DEFINE_STRAUSTRING
#define DEFINE_STRAUSTRING
class StringStr
{
	struct StringData
	{
		char* s;
		int n;
		int sz;
		StringData(int, const char*);
		~StringData() 
		{ 
			delete[] s;
			n = 0;
			sz = 0;
//			free(s);
//			s = nullptr;
		}
		StringData* GetOwnCopy();
		void Assign(int, const char*);
	private:
		StringData(const StringData&);
//		StringData& operator=(const StringData&);
	};
	class Cref
	{
	public:
		inline Cref(StringStr&, int);
		inline Cref(const Cref&);
//		Cref() {}
		inline operator char() const;
		inline void operator=(char);
	private:
		StringStr& s;
		int i;
	};
public:
	inline StringStr();
	inline StringStr(const char*);
	StringStr(const StringStr&);
	~StringStr();
	StringStr& operator=(const char*);
	StringStr& operator=(StringStr&);
//	int 
	inline Cref operator[](int);
	inline char operator[](int) const;
	friend std::ostream&operator<<(std::ostream&, const StringStr*);
	int Length();
	char* const Str();
private:
	inline void Write(int, char);
	inline int Size() const;
	inline char Read(int) const;
	inline void Check(int) const;
	class Range { };
	StringData* rep;
};
inline StringStr::StringStr() : rep(new StringData(0, "")) { }
inline StringStr::StringStr(const char* p) : rep(new StringData(strlen(p), p)) { }
inline void StringStr::Check(int i) const 
{
	if (i < 0 || rep->sz <= i) 
		throw Range();
}
inline char StringStr::Read(int i) const 
{
	return rep->s[i];
}
inline void StringStr::Write(int i, char c) 
{
	rep = rep->GetOwnCopy();
	rep->s[i] = c;
}
inline StringStr::Cref StringStr::operator[](int i) 
{
	Check(i);
	return Cref(*this, i);
}
inline char StringStr::operator[](int i) const 
{
	Check(i);
	return rep->s[i];
}
inline int StringStr::Size() const 
{
	return rep->sz;
}
inline StringStr::Cref::Cref(StringStr& ss, int ii) :s(ss), i(ii) 
{ 
}
inline StringStr::Cref::Cref(const Cref& r) : s(r.s), i(r.i) {}
inline StringStr::Cref::operator char() const 
{
	s.Check(i);
	return s.Read(i);
}
inline void StringStr::Cref::operator=(char c) 
{
	s.Write(i, c);
}
#endif
