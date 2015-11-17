#include "stdafx.h"
#include "word_processor.h"
#include "iostream"
using namespace std;

WordProcessor::WordProcessor()
{
	cout << "������ WordProcessor " << endl;
};
WordProcessor::~WordProcessor()
{
	cout << "������ WordProcessor" << endl;
};
void WordProcessor::set_user(char *string)
{
	delete[]user;
	size = strlen(string);
	user = new char[size];
	for (int i = 0; i < size; i++)
	{
		user[i] = string[i];
	}
};
char* WordProcessor::get_user()
{
	return user;
};
void WordProcessor::print_user()
{
	cout << "������������:";
	for (int i = 0; i < size; i++)
	{
		cout << user[i];
	}
	cout << endl;
}