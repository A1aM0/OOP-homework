// Homework 2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void exercise_5_9_1()
{
	//Write declarations for the following: 
	//a pointer to a character, 
	//an array of 10 integers, 
	//a reference to an array of 10 integers, 
	//a pointer to an array of character strings, 
	//a pointer to a pointer to a character, 
	//a constant integer, 
	//a pointer to a constant integer, 
	//and a constant pointer to an integer. 
	//Initialize each one.
	cout << "5.9.1:\n";

	char a = 'a'; char* char_letter = &a;//a pointer to a character
	int integer_array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };//an array of 10 integers
	int &array_reference = integer_array[10];//a reference to an array of 10 integers
	char name[] = "Yang Songhao\n"; char* char_name = name;//a pointer to an array of character strings
	char* pointer_to_char=&a; char* pointer_to_pionter_to_char = pointer_to_char;//a pointer to a pointer to a character
	const int c = 1;//a constant integer
	int const* const_pointer_to_integer = &c;//a constant pointer to an integer
	//cout << "name = "<<char_name; 
	cout << endl << endl;
}

void exercise_5_9_5() {
	/*	What is the size of the array str in the following example:
		char str[] = "a short string";
		What is the length of the string "a short string" ?
	*/
	cout << "5.9.5:\n";

	char str[] = "a short string";
	cout << "The size of the array str is " << sizeof(str) << " bytes.\n";
	cout << "The length of the string is " << strlen(str) << " letters.\n";

	cout << endl << endl;
}

void extra() {
	cout << "Extra homework:\n";

	char a[999];
	cout << "Type a a string:\n";
	cin.getline(a,999); 
	cout << "The string you typed is:"<<a<<endl;
	char* p = a; char* pp = p;

	//strcpy
	cout << "Copy the string: ";
	for (p; *p != '\0'; ) {
		cout << *p; p++;
	}cout << endl;

	//strlen
	cout << "The length of the string is: ";
	int i = 0;
	while(*pp++ != '\0') {
		i++;
	}cout <<i<<endl;

	cout << endl << endl;
}

void m(int* day,int* days) { 
	int j = 1,k[31];  
	for (j; j <= *day; j++) { 
		//k[j - 1] = j;
		cout << *days++<<"  "; 
		if (j == 10||j==20) { 
			cout << endl; 
		} 
	} 
	cout << endl; 
}
void exercise_5_9_7() {
	/*
		Define a table of the names of months of the year and the number of days in each month.
		Write out that table.
		Do this twice; 
		once using an array of char for the names and an array for the number of days 
		and once using an array of structures, with each structure holding the name of a month and the number of days in it.
	*/
	cout << "5.9.7:\n";

	int big=31, small=30, mini=28,a[31],i;
	
	//First
	char jan[] = "January", feb[] = "February", mar[] = "March", apr[] = "April", may[] = "May", june[] = "June",
		july[] = "July", aug[] = "August", sep[] = "September", oct[] = "October", nov[] = "November", dec[] = "December";
	//for (i = 1; i == 31; i++) { a[i - 1] = i; }for (i = 1; i == big; i++) { cout << a[i]; }
	for (i = 1; i < 32; i++) { a[i - 1] = i; }
	cout << jan << ":\n"; m(&big,a);
	cout << feb << ":\n"; m(&mini, a);
	cout << mar << ":\n"; m(&big, a);
	cout << apr << ":\n"; m(&small, a);
	cout << may << ":\n"; m(&big, a);
	cout << june << ":\n"; m(&small, a);
	cout << july << ":\n"; m(&big, a);
	cout << aug<< ":\n"; m(&big, a);
	cout << sep << ":\n"; m(&small, a);
	cout << oct << ":\n"; m(&big, a);
	cout << nov << ":\n"; m(&small, a);
	cout << dec << ":\n"; m(&big, a);

	//Second
	struct Month
	{
		int month;
		int days[31];

	};
	Month january; Month february; Month march; Month april; Month mayy; Month junee; Month julyy; Month august; Month september; Month october; Month november; Month december;
	january.month = 1;for (i = 1; i < (big+1); i++) { january.days[i - 1] = i; }
	february.month = 1; for (i = 1; i < (mini + 1); i++) { junee.days[i - 1] = i; }
	march.month = 1; for (i = 1; i < (big + 1); i++) { march.days[i - 1] = i; }
	april.month = 1; for (i = 1; i < (small + 1); i++) { april.days[i - 1] = i; }
	mayy.month = 1; for (i = 1; i < (big + 1); i++) { mayy.days[i - 1] = i; }
	junee.month = 1; for (i = 1; i < (small + 1); i++) { junee.days[i - 1] = i; }
	julyy.month = 1; for (i = 1; i < (big + 1); i++) { julyy.days[i - 1] = i; }
	august.month = 1; for (i = 1; i < (big + 1); i++) { august.days[i - 1] = i; }
	september.month = 1; for (i = 1; i < (small + 1); i++) { september.days[i - 1] = i; }
	october.month = 1; for (i = 1; i < (big + 1); i++) { october.days[i - 1] = i; }
	november.month = 1; for (i = 1; i < (small + 1); i++) { november.days[i - 1] = i; }
	december.month = 1; for (i = 1; i < (big + 1); i++) { december.days[i - 1] = i; }

	cout << endl << endl;
}

void exercise_5_9_11() {
	/*
		Read a sequence of words from input. Use Quit as a word that terminates the input. 
		Print the words in the order they were entered. 
		Don’t print a word twice. Modify the program to sort the words before printing them.
	*/
	cout << "5.9.11:\nEnter a string:";
	char a[999],b[999]; int i, j,k=0,len,flag;
	cin.getline(a, 999);
	len = strlen(a);
	b[0] = a[0];
	for (i = 0; a[i] != '\0'; i++) {
		flag = 1;
		for (j = 0; j < k+1; j++) {
			if (b[j] == a[i]) { flag = 0; }
		}
		if (flag) { k++; b[k] = a[i]; }
	}b[k + 1] = '\0';
	cout <<"the new string is : "<< b;
	cout << endl << endl;
}

void exercise_5_9_12() {
	/*
		Write a function that counts the number of occurrences of a pair of letters in a string and another that does the same in a zeroterminated array of char (a Cstyle string). 
		For example, the pair "ab" appears twice in "xabaacbaxabb".
	*/
	cout << "5.9.12:\nEnter a string:";
	char a[999], b[999]; int i, j=0, k = 0, len_a,count=0;
	cin.getline(a, 999);
	len_a = strlen(a);
	cout << "Enter the character-pair which will be detected:";
	cin.getline(b, 999);
	//len_b = strlen(b);
	
	for ( i = 0; i < len_a; i++) {
		//count = 0;
		if (b[0] == a[i]&&b[1] == a[i + 1]) { count++; }
			
	}
	cout << "Repeated times: "<<count;
	

	cout << endl << endl;
}

void exercise_5_9_13() {
	/*
		Define a structDate to keep track of dates. 
		Provide functions that read Dates from input, write Dates to output, and initialize a Date with a date.
	*/
	cout << "5.9.13:\n";
	struct Date
	{
		int year;
		int month;
		int day;

	}; Date my_date;
	cout << "Enter the year you were born in: ";
	cin >> my_date.year;
	cout << "Enter the month you were born in: ";
	cin >> my_date.month;
	cout << "Enter the day you were born on: ";
	cin >> my_date.day;
	cout << "So your birthday is " << my_date.year << " " << my_date.month << " " << my_date.day << " .";

	cout << endl << endl;
}

int main()
{
	exercise_5_9_1();
	exercise_5_9_5();
	extra();
	exercise_5_9_7();
	exercise_5_9_11();
	exercise_5_9_12();
	exercise_5_9_13();

	return 0;
}

