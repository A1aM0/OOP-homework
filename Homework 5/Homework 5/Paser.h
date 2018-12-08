#pragma once
#include "Lexer.h"
#include "Error.h"
//#include "Paser.h"
#ifndef PASER
#define PASER


namespace Parser {
	double prim(bool get);
	double term(bool get);
	double expr(bool get);
	
	using namespace Lexer;
	using namespace Error;
}
//extern double Parser::prim(bool get);
//extern double Parser::term(bool get);
//extern double Parser::expr(bool get);

#endif // !PASER
