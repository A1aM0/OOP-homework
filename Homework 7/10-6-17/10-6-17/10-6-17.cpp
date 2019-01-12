// 10-6-17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"



#include <iostream>

struct MemberA
{
public:
	int x;
	MemberA();
};

struct MemberB
{
	int x;
public:
	MemberB();
};

class ClassA
{
public:
	static MemberA x;
};

class ClassB
{
public:
	static MemberB x;
};

MemberA::MemberA()
{
	x = ClassB::x.x; // <- not yet constructed!
	std::cout << "MemberA constructor called!" << std::endl;
}

MemberB::MemberB()
{
	x = ClassA::x.x;
	std::cout << "MemberB constructor called!" << std::endl;
}

MemberA ClassA::x;
MemberB ClassB::x;


int main()
{
}

