#include "stdafx.h"
#include "iostream"
#include "book.h"
#include "string"
using namespace std;

long long hexadecimal(char p[],int len)
{
	//十六进制转十进制
	int t; long long sum = 0;
	for (int i = 2; i<len; i++) {
		if (p[i] <= '9')
			t = p[i] - '0';
		else
			t = p[i] - 'A' + 10;
		sum = sum * 16 + t;
	}
	return sum;
}

long long octal(char* p)
{
	//八进制转十进制
	long long sum = 0; *p++;
	while (*p)
	{
		sum = sum * 8 + (*p++ - '0');
	}
	return sum;
}

long long decimal(char* p)
{
	//十进制
	long long sum = 0;
	while (*p)
	{
		sum = sum * 10 + (*p++ - '0');
	}
	return sum;
}

void atoi()
{
	//6.6.16
	//Write a function atoi(const char*) that takes a string containing digits and returns the corresponding int .
	//For example, atoi ("123 ") is 123 . Modify atoi() to handle C++ octal and hexadecimal notation in addition to plain decimal numbers.
	//Modify atoi() to handle the C++ character constant notation.
	
	while (1) {
		cout << "\n输入数字字符串：";
		char gets[1024]; int i = 0, len; long long sum;

		cin >> gets;
		len = strlen(gets);

		if ((gets[0] == '0'||gets[0] == 'o')&&gets[1] == 'x') { sum = hexadecimal(gets, len);}
		else if (gets[0] == '0'&&gets[1] != 'x') { sum = octal(gets); }
		else if (gets[0] > '0'&&gets[0] <= '9') { sum = decimal(gets); }
		cout <<"转换数值："<< sum<<"\nctrl+c 退出atoi函数\n\n"; continue;
	}
}
