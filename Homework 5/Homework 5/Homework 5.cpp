// Homework 5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "Lexer.h"
#include "Error.h"
#include "Paser.h"
#include "string"
#include "map"
using namespace std;

void book9_6_3();
int calculator();

int main()
{
	//9.6.3:
	/*Write a program that reads a source file and writes out the names of files #included.
	Indent file names to show files #included by included files.
	Try this program on some real source files(to get an idea of the amount of information included).*/

	//9.6.8
	/*Modify the desk calculator so that 
	it can be invoked from main() or from other functions 
	as a simple function call.*/


	while (1)
	{
		cout << "输入1，进入题9.6.3；\n输入2，进入题Calculator：" << endl;
		int i;
		cin >> i; cout << "\n";
		switch (i) 
		{
		case 1:
			book9_6_3();
		case 2:
			calculator();
		}
		cout << endl << endl ;
	}

    return 0;
}

void book9_6_3()
{
	//读取include？
	cout << "\n9.6.3：Write a program that reads a source file and writes out the names of files #included."
		<<"\n\tIndent file names to show files #included by included files."
		<<"\n\tTry this program on some real source files(to get an idea of the amount of information included).";
	cout << endl;
	int a = 0;
}


int calculator()
{
	//分别编译计算器
	cout << "9.6.8：Modify the desk calculator so that "
		<< "\n\tit can be invoked from main() or from other functions"
		<< "\n\tas a simple function call.";
	cout << endl;
	Lexer::table["pi"] = 3.1415926535897932385;
	Lexer::table["e"] = 2.7182818284590452354;
	while (cin) {
		Lexer::Token_value get_token();
		if (Lexer::curr_tok == Lexer::END) break;
		if (Lexer::curr_tok == Lexer::PRINT) continue;
		cout << Parser::expr(false) << "\n";
		cout << "\nctrl+c 退出计算器\n\n";
	}
	return Lexer::no_of_errors;
}