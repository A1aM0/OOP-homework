// homework2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

class Shape {
public:
	virtual bool closed() = 0;
	virtual void rotate(int) = 0;
	virtual void draw() = 0;
};
class Point {
	friend class Shape;
	int x; int y;
public:
	Point(int i = 0, int j = 0) :x(i), y(j) {}
};
class Circle :public Shape {
	int radius;
	Point center;
public:
	Circle(int r = 0, int i = 0, int j = 0) :radius(r), center(i, j) { cout << "it is a circle!\n"; }
	bool closed() { cout << "it is closed!"; return 1; }
	void rotate(int u) { cout << "the circle rotate!" << endl; }
	void draw() { cout << "using circle draw!" << endl; }
};
class Square :public Shape {
	int length;
public:
	Square(int i) :length(i) { cout << "it is a square!" << endl; }
	bool closed() { cout << "it is closed!" << endl; return 1; }
	void rotate(int u) { cout << "the square is not rotate!" << endl; }
	void draw() { cout << "using square draw!" << endl; }
};
class Triangle :public Shape {
	int line1;
	int line2;
	int line3;
public:
	Triangle(int i = 0, int j = 0, int k = 0) :line1(i), line2(j), line3(k) { cout << "it is a triangle!" << endl; }
	bool closed() { cout << "it is closed!" << endl; return 1; }
	void rotate(int u) { cout << "the triangle is not rotate!" << endl; }
	void draw() { cout << "using triangle draw!" << endl; }
};
bool intersect(Shape * a, Shape *b) { a->draw(); b->draw(); return 1; } //测试函数 void main() { Circle c1(3,4,5); Circle c2(7,8); Circle *pc=&c2; Square s1(5); Square s2(6); Square *ps=&s2; Triangle t1(6,10,8); Triangle t2(5,3,4); Triangle *pt=&t2; intersect(ps,pt); intersect(pc,pt); intersect(&c1,&s1); intersect(&s1,&t1); }

void main() {
	getchar();
}