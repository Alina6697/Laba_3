#include "stdafx.h"
#include "word.h"
#include "software.h"
#include "data.h"
#include <iostream>

using namespace std;

Word::Word()
 {
	set_developer("Microsoft");
	cout << "Создан Word" << endl;
	print_developer();

};
Word::~Word()


 {
	cout << "Удален Word" << endl;
};
