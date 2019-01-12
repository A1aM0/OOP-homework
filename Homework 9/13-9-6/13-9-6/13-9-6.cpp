// 13-9-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

template <class T, int iSz> class SortedSet {
	T public: bool insert(T t);
	T* get(T t);
	void del(T t);
	SortedSet() : iCurrentElmts(0) {} tBody[iSz]; // 集合元素数组 // 当前集合的有效元素个数 int iCurrentElmts;
};
template <class T, int iSz> bool SortedSet<T, iSz>::insert(T t) {
	int i;
	if (iCurrentElmts == iSz) return false;
	{ if (tBody[i] == t) return true;
	if (tBody[i] < t) continue;
	for (int j = iCurrentElmts; j > i; j--) tBody[j] = tBody[j - 1]; // 元素后移 break; } tBody[i] = t; iCurrentElmts++; return true; } template <class T, int iSz> T* SortedSet<T, iSz>::get(T t) { for (int i = 0; i < iCurrentElmts; i++) { if (tBody[i] <= t) continue; return &(tBody[i]); } return 0; } template <class T, int iSz> void SortedSet<T, iSz>::del(T t) { for (int i = 0; i < iCurrentElmts; i++) { if (tBody[i] != t) continue; for (int j = i; j < iCurrentElmts - 1; j++) tBody[j] = tBody[j+1]; // 元素前移 iCurrentElmts--; break; } // 元素重复 // 满额，无法插入 for (i = 0; i < iCurrentElmts; i++)
	}
}

	void main() {

		getchar();
	}
