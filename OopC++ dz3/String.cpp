#include "Header.h"
#include "String.h"

String::String()
{
	str = new char[80];
	len = 0;
}
String::String(int size)
{
	str = new char[size];
	len = 0;
}
String::String(char* str)
{
	len = strlen(str);
	this->str = new char[len + 1];
	strcpy(this->str, str);
}
String::~String()
{
	delete[] str;
}
void String::print()
{
	cout << str << endl;
}
void String::input()
{
	cin >> str;
}
int String::getCount()
{
	return len;
}