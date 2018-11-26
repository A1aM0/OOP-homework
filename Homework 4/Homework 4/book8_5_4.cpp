#include "stdafx.h"
#include "iostream"
#include "book.h"
using namespace std;


double fuc(double x, double y)
{
	if (y == 0)
	{
		throw y;  
	}
	return x / y;
}

void book8_5_4()
{
	//Write a program that throws an exception in one function and catches it in another.
	cout << "8.5.4: Write a program that throws an exception in one function and catches it in another.\n";
	
	double x,y,res;
	cout << "\n测试两数相除：\n输入被除数：\n";
	cin >> x;
	cout << "输入除数：\n";
	cin >> y;

	try
	{
		cout << "\nx/y 结果为：" << fuc(x,y) << endl << endl;
	}
	catch (double) 
	{
		cerr << "\n错误：除数为0！\n\n";
	}

}