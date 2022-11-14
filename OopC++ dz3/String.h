#pragma once
#include "Header.h"

class String
{
private:
	char* str;
	int len;
	int size;
public:
	// ������������
	// // ����������� ��� ��������� ��������� ����� ������� 80 ��������
	// ����������� ������� ������� ����� � �������������� ��� ������, ���������� �� ������������
	// ����������� ��� ��������� ��������� ����� � �������� ��������
	String();
	String(int size);
	String(char* str);
	~String();
	//������
	void print();
	void input();
	int getCount();
};
