// Laba2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "software.h"
#include "word_processor.h"
#include "virus.h"
#include "game.h"
#include "sapper.h"
#include "word.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"RUS");
	Word Doc1;
	Virus New;
	New.set_developer("Trojan");
	New.print_developer();
	Sapper Sap1;
	Sap1.print_developer();
	Game v1, *v = &v1;
	Sapper s1, *s = &s1;
	Game *n = &s1;
	v->print();
	s->print();
	n->print();
	Game* g1 = new Game("Vasia");
	g1->print();
	return 0;
}

