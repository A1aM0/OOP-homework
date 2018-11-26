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
	cout << "8.5.10：Write plus(), minus(), multiply(), and divide() functions \n\tthat check for possible overflow and underflow and that throw exceptions if such errors happen.\n\n";

	double x, y, res;char m;
	
	cout << "选择加、减、乘、除：输入“+”或“-”或“*”或“/”\n";
	cin >> m;
	if (m == '+')
	{
		cout << "\n测试1000以内加法：\n输入被加数：\n";
		cin >> x;
		cout << "输入加数：\n";
		cin >> y;

		try
		{
			cout << "\nx+y 结果为：" << fuc_plus(x, y) << endl << endl;
		}
		catch (double)
		{
			cerr << "\n错误：输入超过1000！\n\n";
		}
	}
	else if(m == '-')
	{
		cout << "\n测试结果为正的减法：\n输入被减数：\n";
		cin >> x;
		cout << "输入减数：\n";
		cin >> y;

		try
		{
			cout << "\nx-y 结果为：" << fuc_minus(x, y) << endl << endl;
		}
		catch (double)
		{
			cerr << "\n错误：结果为负！\n\n";
		}
	}
	else if (m == '*')
	{
		cout << "\n测试三位数以内的乘法：\n输入被乘数：\n";
		cin >> x;
		cout << "输入乘数：\n";
		cin >> y;

		try
		{
			cout << "\nx*y 结果为：" << fuc_multiply(x, y) << endl << endl;
		}
		catch (double)
		{
			cerr << "\n错误：超出范围！\n\n";
		}
	}
	else if (m == '/')
	{
		cout << "\n测试两数相除：\n输入被除数：\n";
		cin >> x;
		cout << "输入除数：\n";
		cin >> y;

		try
		{
			cout << "\nx/y 结果为：" << fuc_divide(x, y) << endl << endl;
		}
		catch (double)
		{
			cerr << "\n错误：除数为0！\n\n";
		}
	}
}