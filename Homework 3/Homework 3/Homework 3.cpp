// Homework 3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
#include "book.h"
#include "map"
#include "string"
using namespace std;


int main()
{
	while (true)
	{
		cout << "���롰1����������6.6.16\n"
			<< "���롰2����������6.6.17\n"
			<< "���롰3����������Desk Caculator\n"
			<<"��ѡ��";
		int i;
		cin >> i;
		cout << endl;
		switch (i)
		{
		case 1:
			cout << "�����ַ���ת��Ϊ��ֵ��\n" << "���˽��ơ�ʮ�������Զ�ת��Ϊʮ���ƣ�\n\n";
			atoi(); break;
		case 2:
			cout << "��ֵת��Ϊ�����ַ�����\n" << "\n";
			itoa(); break;
		case 3:
			cout << "�����������\n"; 
			calculator(); break;
		default:
			break;
		}
	}
	return 0;

}
