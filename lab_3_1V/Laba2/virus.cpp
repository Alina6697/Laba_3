#include "stdafx.h"
#include "virus.h"
#include "iostream"
using namespace std;

Virus::Virus()
{
	set_developer("Hacker");
	cout << "������ Virus" << endl;
	print_developer();
};
Virus::~Virus()
{
	cout << "������ Virus" << endl;
};