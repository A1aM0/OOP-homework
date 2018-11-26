#include "stdafx.h"
#include "iostream"
#include "book.h"
using namespace std;

void int2str(int n, char* str) 
{
	//转换并显示
	char buf[10]=""; int i = 0, len = 0, temp = n < 0 ? -n : n;

	if (str == NULL) { return; }
	while (temp)
	{
		buf[i++] = (temp % 10) + '0';
		temp /= 10;
	}
	len = n < 0 ? ++i : i;
	str[i] = 0;
	while (true)
	{
		i--;
		if (buf[len - i - 1] == 0) { break; }
		str[i] = buf[len - i - 1];
	}
	if (i == 0) { str[i] = '-'; }
}

void itoa()
{
	//6.6.16
	//Write a function itoa (int i ,char b[]) that creates a string representation of i in b and returns b .
	
	while (true)
	{
		int num; char p[1024];
		cout << "输入一个整形数：";
		cin >> num;
		cout << "转化为字符串：";
		int2str(num, p);
		cout << p << endl << endl;
		continue;
	}
}
