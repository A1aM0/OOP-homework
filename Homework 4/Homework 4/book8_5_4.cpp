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
	cout << "\n�������������\n���뱻������\n";
	cin >> x;
	cout << "���������\n";
	cin >> y;

	try
	{
		cout << "\nx/y ���Ϊ��" << fuc(x,y) << endl << endl;
	}
	catch (double) 
	{
		cerr << "\n���󣺳���Ϊ0��\n\n";
	}

}