// homework2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

class base {
public:
	virtual void iam() { cout << "base\n"; }
};

class Junior_1 :public base {
public:
	void iam() { cout << "Junior_1\n"; }
};

class Junior_2 :public base {
public:
	void iam() { cout << "Junior_2\n"; }
};

void main() {
	Junior_1 jun_1;
	Junior_2 jun_2;
	base ba = jun_1;
	jun_1.iam();
	jun_2.iam();
	ba.iam();
	getchar();
}