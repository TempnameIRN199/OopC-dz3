#include "Header.h"
#include "String.h"

int main()
{
	setlocale(0, "");
	String str1(30);
	String str2(30);
	String str3(30);
	str1.input();
	str2.input();
	str3.input();
	str1.print();
	str2.print();
	str3.print();
	cout << str1.getCount() << endl;
	cout << str2.getCount() << endl;
	cout << str3.getCount() << endl;
	system("pause");
	return 0;
}
