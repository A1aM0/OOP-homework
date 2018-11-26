#include "stdafx.h"
#include "iostream"
#include "book.h"
using namespace std;

double fuc_plus(double x,double y) 
{
	//++
	double res;
	res = x + y;
	if (x>=1000 || y>=1000)
	{
		throw res;
	}
	return res;
}

double fuc_minus(double x, double y)
{
	//--
	double res;
	res = x - y;
	if (res<0)
	{
		throw res;
	}
	return res;
}

double fuc_multiply(double x, double y)
{
	//**
	double res;
	res = x * y;
	if (x >= 100 || y >= 100)
	{
		throw res;
	}
	return res;
}

double fuc_divide(double x, double y)
{
	if (y == 0)
	{
		throw y;
	}
	return x / y;
}


void book8_5_10()
{
	//Write plus(), minus(), multiply(), and divide() functions that check for possible overflow and underflow and that throw exceptions if such errors happen.
	cout << "8.5.10��Write plus(), minus(), multiply(), and divide() functions \n\tthat check for possible overflow and underflow and that throw exceptions if such errors happen.\n\n";

	double x, y, res;char m;
	
	cout << "ѡ��ӡ������ˡ��������롰+����-����*����/��\n";
	cin >> m;
	if (m == '+')
	{
		cout << "\n����1000���ڼӷ���\n���뱻������\n";
		cin >> x;
		cout << "���������\n";
		cin >> y;

		try
		{
			cout << "\nx+y ���Ϊ��" << fuc_plus(x, y) << endl << endl;
		}
		catch (double)
		{
			cerr << "\n�������볬��1000��\n\n";
		}
	}
	else if(m == '-')
	{
		cout << "\n���Խ��Ϊ���ļ�����\n���뱻������\n";
		cin >> x;
		cout << "���������\n";
		cin >> y;

		try
		{
			cout << "\nx-y ���Ϊ��" << fuc_minus(x, y) << endl << endl;
		}
		catch (double)
		{
			cerr << "\n���󣺽��Ϊ����\n\n";
		}
	}
	else if (m == '*')
	{
		cout << "\n������λ�����ڵĳ˷���\n���뱻������\n";
		cin >> x;
		cout << "���������\n";
		cin >> y;

		try
		{
			cout << "\nx*y ���Ϊ��" << fuc_multiply(x, y) << endl << endl;
		}
		catch (double)
		{
			cerr << "\n���󣺳�����Χ��\n\n";
		}
	}
	else if (m == '/')
	{
		cout << "\n�������������\n���뱻������\n";
		cin >> x;
		cout << "���������\n";
		cin >> y;

		try
		{
			cout << "\nx/y ���Ϊ��" << fuc_divide(x, y) << endl << endl;
		}
		catch (double)
		{
			cerr << "\n���󣺳���Ϊ0��\n\n";
		}
	}
}