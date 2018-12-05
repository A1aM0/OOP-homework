#include "stdafx.h"
#include "iostream"
//#include "Lexer.h"
//#include "Error.h"
#include "Paser.h"
#include "string"
using namespace std;
using namespace Lexer;
using namespace Error;
//using namespace Parser;

Token_value get_token();

double prim(bool get)
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
		double& v = Lexer::table[string_value];
		if (get_token() == ASSIGN) v = Parser::expr(true);
		return v;
	}
	case MINUS:
		return -prim(true);
	case LP:
	{
		double e = Parser::expr(true);
		if (curr_tok != RP) return error(") expected");
		get_token();
		return e;
	}
	}
}

double term(bool get)
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
double expr(bool get)
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