// 10-6-15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <iostream>

class AppInit
{
public:
	AppInit();
	~AppInit();
} oAppInit;

AppInit::AppInit()
{
	std::cout << "Initialize" << std::endl;
}

AppInit::~AppInit()
{
	std::cout << "Clean up" << std::endl;
}

int main()
{
	std::cout << "Hello, world!\n";
	return 0;
}
