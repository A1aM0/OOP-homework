#include "stdafx.h"
#include "iostream"
#include "Lexer.h"
#include "Error.h"
//#include "Paser.h"
//#include "string"
using namespace std;
//using namespace Lexer;
//using namespace Error;

double Error::error(const string& s)
{
	Lexer::no_of_errors++;
	cout << "error: " << s << "\n";
	return 1;
}