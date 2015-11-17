#include "user.h"
#include <string>
#include <iostream>
using namespace std;

User::User()
{
	nik = "";
	age = 0;
}
User::User(string nik_, int age_)
{
	nik = nik_;
	age = age_;
}

void User::set_nik(string nik_)
{
	nik = nik_;
}
string User::get_nik()
{
	return nik;
}

void User::set_age(int age_)
{
	age = age_;
}
int User::get_age()
{
	return age;
}

void User::print()
{
	cout << "Polzovatel`:\n";
	cout << "Nik:\t" << get_nik() << "\n";
	cout << "Age:\t" << get_age() << "\n";
}