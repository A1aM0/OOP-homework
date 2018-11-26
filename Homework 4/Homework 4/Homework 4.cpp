// Homework 4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "book.h"
using namespace std;


int main()
{
	while (true)
	{
		cout << "输入“1”，进入题8.5.4\n"
			<< "输入“2”，进入题8.5.10\n"
			<< "输入“3”，进入题Desk Caculator\n"
			<< "请选择：";
		int i;
		cin >> i;
		cout << endl;
		switch (i)
		{
		case 1:
			cout << "8.5.4：抛出异常并捕获它\n";
			book8_5_4(); break;
		case 2:
			cout << "8.5.10：检测溢出和下溢\n";
			book8_5_10(); break;
		case 3:
			cout << "桌面计算器：\n";
			calculator(); break;
		default:
			break;
		}
	}
    return 0;
}

