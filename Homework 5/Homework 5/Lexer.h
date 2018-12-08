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
	extern Token_value curr_tok;
	extern double number_value;
	extern string string_value;
	extern map<string, double>    table;
	extern int		no_of_errors;

}
//extern Lexer::Token_value curr_tok;
//extern double Lexer::number_value;
//extern string Lexer::string_value;
//extern map<string, double> Lexer::table;
//extern int Lexer::no_of_errors;

#endif // !LEXER
