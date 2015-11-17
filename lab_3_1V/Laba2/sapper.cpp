#include "stdafx.h"
#include "iostream"
#include "sapper.h"

using namespace std;
Sapper::Sapper()
{
	set_developer("Microsoft");
	cout << "Создан Sapper" << endl;
	print_developer();
}
Sapper::~Sapper()
{
	cout << "DELETE Sapper" << endl;
}
void Sapper::print(void)
{
	cout << "VIRTUAL SAPPER" << endl;
}