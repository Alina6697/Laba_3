#include "stdafx.h"
#include "word.h"
#include "software.h"
#include "data.h"
#include <iostream>

using namespace std;

Word::Word()
 {
	set_developer("Microsoft");
	cout << "������ Word" << endl;
	print_developer();

};
Word::~Word()


 {
	cout << "������ Word" << endl;
};
