#pragma once
class Date {
	int  d, m, y;
	static Date default_date;
public:
	enum Month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
	class Bad_date { };
	Date(int dd = 0, Month mm = Month(0), int yy = 0);

	int day() const;
	Month month() const;
	int year() const;
	/* бн */

	static void set_default(int, Month, int);

	Date& add_year(int n);
	Date& add_month(int n);
	Date& add_day(int n);
	/* ... */
};