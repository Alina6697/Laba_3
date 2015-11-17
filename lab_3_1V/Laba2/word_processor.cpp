#include "stdafx.h"
#include "word_processor.h"
#include "iostream"
using namespace std;

WordProcessor::WordProcessor()
{
	cout << "Создан WordProcessor " << endl;
};
WordProcessor::~WordProcessor()
{
	cout << "Удален WordProcessor" << endl;
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
	cout << "Пользователь:";
	for (int i = 0; i < size; i++)
	{
		cout << user[i];
	}
	cout << endl;
}