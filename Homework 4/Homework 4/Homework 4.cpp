// Homework 4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
#include "book.h"
using namespace std;


int main()
{
	while (true)
	{
		cout << "���롰1����������8.5.4\n"
			<< "���롰2����������8.5.10\n"
			<< "���롰3����������Desk Caculator\n"
			<< "��ѡ��";
		int i;
		cin >> i;
		cout << endl;
		switch (i)
		{
		case 1:
			cout << "8.5.4���׳��쳣��������\n";
			book8_5_4(); break;
		case 2:
			cout << "8.5.10��������������\n";
			book8_5_10(); break;
		case 3:
			cout << "�����������\n";
			calculator(); break;
		default:
			break;
		}
	}
    return 0;
}

