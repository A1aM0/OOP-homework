// 13-9-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream> 
using namespace std;

template <class T, int iSz> class SortedSet {
	T public: bool insert(T t);
	T* get(T t);
	void del(T t);
	SortedSet() : iCurrentElmts(0) {} tBody[iSz]; // ����Ԫ������ // ��ǰ���ϵ���ЧԪ�ظ��� int iCurrentElmts;
};
template <class T, int iSz> bool SortedSet<T, iSz>::insert(T t) {
	int i;
	if (iCurrentElmts == iSz) return false;
	{ if (tBody[i] == t) return true;
	if (tBody[i] < t) continue;
	for (int j = iCurrentElmts; j > i; j--) tBody[j] = tBody[j - 1]; // Ԫ�غ��� break; } tBody[i] = t; iCurrentElmts++; return true; } template <class T, int iSz> T* SortedSet<T, iSz>::get(T t) { for (int i = 0; i < iCurrentElmts; i++) { if (tBody[i] <= t) continue; return &(tBody[i]); } return 0; } template <class T, int iSz> void SortedSet<T, iSz>::del(T t) { for (int i = 0; i < iCurrentElmts; i++) { if (tBody[i] != t) continue; for (int j = i; j < iCurrentElmts - 1; j++) tBody[j] = tBody[j+1]; // Ԫ��ǰ�� iCurrentElmts--; break; } // Ԫ���ظ� // ����޷����� for (i = 0; i < iCurrentElmts; i++)
	}
}

	void main() {

		getchar();
	}
