// homework2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream> 
#include<vector> 
#include<cstddef>
using namespace std;

typedef int(*CFT)(const void*, const void*);
struct Record {
	int count; //�洢���� double price;//�洢�۸� Record(int countt=12,double pricee=12.12):count(countt),price(pricee) {}
	friend ostream& operator<<(ostream& os, Record& record) {
		os << record.count << " " << record.price; return os;
	}
};
int compare0(const void* p, const void* q) {
	return static_cast<const Record*>(p)->count - static_cast<const Record*>(q)->count;
}
int compare1(const void* p, const void* q) {
	return static_cast<const Record*>(p)->price - static_cast<const Record*>(q)->price;
} //��T�����Ҫ�Ƚϵ����ͣ���X�����Ƚϵı�׼ template<class T,class X>void sort(vector<T>& v,X cmp) { const size_t n=v.size(); for(int gap=n/2;0<gap;gap/=2) for(int i=gap;i<n;i++) for(int j=i-gap;0<=j;j-=gap) if(cmp(&v[j+gap],&v[j])<0) { T temp=v[j]; v[j]=v[j+gap]; v[j+gap]=temp; } }

void main() {

	getchar();
}