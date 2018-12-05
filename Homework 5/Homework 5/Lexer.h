#pragma once
//#include "Error.h"
//#include "Lexer.h"


#ifndef LEXER
#define LEXER
#include "string"
#include "map"
using namespace std;
namespace Lexer {

	enum Token_value {
		NAME, NUMBER,
		END,
		PLUS = '+', MINUS = '-',
		MUL = '*', DIV = '/',
		PRINT = ';', ASSIGN = '=',
		LP = '(', RP = ')'
	};
	Token_value curr_tok;
	double number_value;
	string string_value;
	map<string, double>    table;
	int		no_of_errors;

}

#endif // !LEXER
