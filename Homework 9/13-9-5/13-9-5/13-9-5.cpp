// homework2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream> 
#include<vector> 
#include<cstddef>
using namespace std;

typedef int(*CFT)(const void*, const void*);
struct Record {
	int count; //存储数量 double price;//存储价格 Record(int countt=12,double pricee=12.12):count(countt),price(pricee) {}
	friend ostream& operator<<(ostream& os, Record& record) {
		os << record.count << " " << record.price; return os;
	}
};
int compare0(const void* p, const void* q) {
	return static_cast<const Record*>(p)->count - static_cast<const Record*>(q)->count;
}
int compare1(const void* p, const void* q) {
	return static_cast<const Record*>(p)->price - static_cast<const Record*>(q)->price;
} //用T来表达要比较的类型，用X来表达比较的标准 template<class T,class X>void sort(vector<T>& v,X cmp) { const size_t n=v.size(); for(int gap=n/2;0<gap;gap/=2) for(int i=gap;i<n;i++) for(int j=i-gap;0<=j;j-=gap) if(cmp(&v[j+gap],&v[j])<0) { T temp=v[j]; v[j]=v[j+gap]; v[j+gap]=temp; } }

void main() {

	getchar();
}