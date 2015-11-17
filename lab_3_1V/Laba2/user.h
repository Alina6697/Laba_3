#pragma once
#include <string>
using namespace std;

class User
{
	string nik;
	int age;

public:
	User();
	~User();
	User(string, int);

	void set_nik(string);
	string get_nik();

	void set_age(int);
	int get_age();

	virtual void print();
};