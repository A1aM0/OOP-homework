#pragma once
#include "Lexer.h"
#include "Error.h"
//#include "Paser.h"
#ifndef PASER
#define PASER


namespace Parser {
	double prim(bool);
	double term(bool);
	double expr(bool);
	
}
#endif // !PASER
