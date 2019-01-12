

#include "stdafx.h"
#include <iostream> 
using namespace std;

template <class T> class ArrayTmp {
	friend class Array<T>;
	T* tpBody;
	int iRows, iColumns, iK;
public:
	int iCurrentRow;
	int iCurrentCol;
	ArrayTmp(int iRsz, int iCsz, int iKsz) {
		tpBody = new T[iRsz*iCsz*iKsz];
		iRows = iRsz;
		iColumns = iCsz;
		iK = iKsz;
		iCurrentRow = -1;
		iCurrentCol = -1;
	};
	T& operator[](int k) {
		return tpBody[iCurrentRow + iCurrentCol*iK + k*iRows*iColumns];
	}
	void print2() {
		int i, N = iRows*iColumns*iK;
		for (i = 0; i<N; i++) cout << tpBody[i] << '\t'; cout << endl;
	}
};
template <class T> class ArrayTmp1 {
	ArrayTmp<T> tTmp2;
public:
	int iCurrentRow;
	ArrayTmp1(int iRsz, int iCsz, int iKsz) :tTmp2(iRsz, iCsz, iKsz) {
		iCurrentRow = -1;
	}
	ArrayTmp<T>& operator[](int j) {
		tTmp2.iCurrentRow = iCurrentRow;
		tTmp2.iCurrentCol = j;
		return tTmp2;
	}
	void print1() { tTmp2.print2(); }
};
template <class T> class Array {
	ArrayTmp1<T> tTmp1;
public:
	ArrayTmp1<T>& operator[](int i) { tTmp1.iCurrentRow = i; return tTmp1; }
	Array(int iRsz, int iCsz, int iKsz) :tTmp1(iRsz, iCsz, iKsz) {} void print() {
		tTmp1.print1();
	}
};
const int M = 2;
const int N = 2;
const int K = 2;


void main() {
	Array<int> intArray(M, N, K);
	int i, j, k, kk = 0;
	for (i = 0; i<M; i++)
		for (j = 0; j<N; j++)
			for (k = 0; k<K; k++)
			{
				intArray[i][j][k] = kk; kk++;
			}
	intArray.print();
	getchar();
}