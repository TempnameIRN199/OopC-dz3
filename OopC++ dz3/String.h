#pragma once
#include "Header.h"

class String
{
private:
	char* str;
	int len;
	int size;
public:
	// конструкторы
	// // конструктор что позволяет создавать рядок длинной 80 символов
	// конструктор который создает рядок и инициализирует его рядком, полученным от пользователя
	// конструктор что позволяет создавать рядок с заданным размером
	String();
	String(int size);
	String(char* str);
	~String();
	//методы
	void print();
	void input();
	int getCount();
};
