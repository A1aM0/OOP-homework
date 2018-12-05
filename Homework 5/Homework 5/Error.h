#pragma once
#include "Lexer.h"
#include "string"
//#include "Error.h"
#ifndef ERROR
#define ERROR
using namespace std;

namespace Error {
	//using namespace Lexer;

	double error(const string& s);
	/*{
		no_of_errors++;
		cerr << "error: " << s << "\n";
		return 1;
	}*/
}

#endif // !ERROR
