#include "stdafx.h"
#include "Date.h"
int leapyear(int y)
{
	//平年闰年
	if (y % 4 == 0 && y % 100 != 0) { return 1; }
	else if (y % 400 == 0) { return 1; }
	return 0;
}
Date::Date(int dd, Month mm, int yy)
{
	if (yy == 0) yy = default_date.year();
	if (mm == 0) mm = default_date.month();
	if (dd == 0) dd = default_date.day();
	int max;
	switch (mm) {
	case feb:
		max = 28 + leapyear(yy);
		break;
	case apr: case jun: case sep: case nov:
		max = 30;
		break;
	case jan: case mar: case may: case jul: case aug: case oct: case dec:
		max = 31;
		break;
	default:
		throw Bad_date();
	}
	if (dd<1 || max<dd) throw Bad_date();
	y = yy;
	m = mm;
	d = dd;

}

Date & Date::add_month(int n)
{
	// TODO: 在此处插入 return 语句
	if (n == 0) return *this;

	if (n>0) {
		int delta_y = n / 12;
		int mm = m + n % 12;
		if (12<mm) {
			delta_y++;
			mm -= 12;
		}
		y += delta_y;
		m = Month(mm);
		return *this;
	}
	return *this;
}
