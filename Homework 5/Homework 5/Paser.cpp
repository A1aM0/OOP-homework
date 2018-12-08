#include "stdafx.h"
#include "iostream"
#include "Lexer.h"
#include "Error.h"
#include "Paser.h"
#include "string"
using namespace std;
//using namespace Lexer;
//using namespace Error;
//using namespace Parser;

Lexer::Token_value get_token();

double Parser::prim(bool get)
{
	if (get) get_token();
	switch (curr_tok) {
	case NUMBER:
	{
		get_token();
		return number_value;
	}
	case NAME:
	{
		double& v = table[string_value];
		if (get_token() == ASSIGN) v = expr(true);
		return v;
	}
	case MINUS:
		return -prim(true);
	case LP:
	{
		double e = expr(true);
		if (curr_tok != RP) return error(") expected");
		get_token();
		return e;
	}
	}
}

double Parser::term(bool get)
{
	double left = prim(get);
	for (;;)
		switch (curr_tok) {
		case MUL:
			left *= prim(true);
			break;
		case DIV:
			if (double d = prim(true)) {
				left /= d;
				break;
			}
			return error("divide by 0");
		default:
			return left;
		}

}
double Parser::expr(bool get)
{
	double left = term(get);
	for (;;) {
		switch (curr_tok) {
		case PLUS:
			left += term(true);
			break;
		case MINUS:
			left -= term(true);
			break;
		default:
			return left;
		}
	}
}

