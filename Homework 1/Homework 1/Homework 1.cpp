// Homework 1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void exercise_411_1()
{
	//Get the ‘‘Hello, world!’’ program (§3.2) to run. If that program doesn’t compile as written, look at §B.3.1.

	cout << "4.11-1:\n";
	cout << "Hello world!" << "\n";
	cout << "\n\n";
}

void exercise_411_5()
{
	//What, on your system, are the largest and the smallest values of the following types:char,short,int,long,float,double,long double,and unsigned.
	cout << "4.11-5:\n";
	cout << "On my system, char can range [0,255)\n";
	cout << "On my system, short can range [-32768,32767)\n";
	cout << "On my system, int can range [-2147483648,2147483647)\n";
	cout << "On my system, long can range [-2147483648,2147483647)\n";
	cout << "On my system, float can range [3.4e–38,3.4e38)\n";
	cout << "On my system, double can range [1.7e–308,1.7e308)\n";
	cout << "On my system, unsigned int can range [0,4294967296)\n\n";
}

void exercise_411_3()
{
	//Write a program that prints the sizes of the fundamental types, a few pointer types, and a few enumerations of your choice. Use the s i z e o f operator.
	
	cout << "4.11-3:\n";
	cout << "The size of a Boolean is " << sizeof(bool) << "bytes\n\n"; 

	cout << "The size of a Character(an English letter) is "<< sizeof(char)<<" bytes\n";
	cout << "The size of a Signed Character(an English letter) is "<< sizeof(signed char)<<" bytes\n";
	cout << "The size of a Wchar_t Character(an English letter) is "<< sizeof(wchar_t)<<" bytes\n\n";

	cout << "The size of an Integer is "<< sizeof(int)<<" bytes\n";
	cout << "The size of an Unsigned Integer is "<< sizeof(unsigned int)<<" bytes\n";
	cout << "The size of a Short Integer is "<< sizeof(short)<<" bytes\n";
	cout << "The size of an Unsigned Short Integer is "<< sizeof(unsigned short)<<"bytes\n";
	cout << "The size of a Long Integer is "<< sizeof(long)<<"bytes\n";
	cout << "The size of an Unsigned Long Integer is "<< sizeof(unsigned long)<<" bytes\n\n";

	cout << "The size of a Floating-point is "<< sizeof(float)<<"bytes\n";
	cout << "The size of a Double Floating-point is "<< sizeof(double)<<" bytes\n";
	cout << "The size of a Long Double Floating-point is "<< sizeof(long double)<<" bytes\n\n";

	//枚举数组大小
	enum enumeration
	{
		one,two,three,four,five,six,seven=77777
	};cout << "The size of a seven-elements Enumeration is "<< sizeof(enumeration)<<" bytes\n\n";

	//指针大小
	char* p; int* a;
	cout << "The size of a CharacterPointer is " << sizeof(p) << " bytes\n\n";
	cout << "The size of a IntegerPointer is " << sizeof(a) << " bytes\n\n";

}

int main()
{
	exercise_411_1();
	exercise_411_3();
	exercise_411_5();
	return 0;
}
