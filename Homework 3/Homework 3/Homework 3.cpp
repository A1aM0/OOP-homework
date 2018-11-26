// Homework 3.cpp : 定义控制台应用程序的入口点。
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
		cout << "输入“1”，进入题6.6.16\n"
			<< "输入“2”，进入题6.6.17\n"
			<< "输入“3”，进入题Desk Caculator\n"
			<<"请选择：";
		int i;
		cin >> i;
		cout << endl;
		switch (i)
		{
		case 1:
			cout << "数字字符串转换为数值：\n" << "（八进制、十六进制自动转换为十进制）\n\n";
			atoi(); break;
		case 2:
			cout << "数值转换为数字字符串：\n" << "\n";
			itoa(); break;
		case 3:
			cout << "桌面计算器：\n"; 
			calculator(); break;
		default:
			break;
		}
	}
	return 0;

}
