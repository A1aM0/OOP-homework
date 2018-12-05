#include "stdafx.h"
#include "iostream"
//#include "Lexer.h"
#include "Error.h"
//#include "string"
using namespace std;
using namespace Lexer;
using namespace Error;

double error(const string& s)
{
	no_of_errors++;
	cout << "error: " << s << "\n";
	return 1;
}