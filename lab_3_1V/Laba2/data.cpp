#include "stdafx.h"
#include "data.h"
#include "iostream"

using namespace std;

Data::Data()
{
	day = rand() % 31 + 1;
	month = rand() % 12 + 1;
	year = rand() % 2015 + 1;
	cout << "Дата создания: " << day << "." << month << "." << year << endl;
}
Data::Data(int day_, int month_, int year_)
{
	set_data(day_, month_, year_);
}
Data::~Data(){};
void Data::set_data(int day_, int month_, int year_)
{
	day = day_;
	month = month_;
	year = year_;
}
void Data::set_day(int day_)
{
	day = day_;
};
int Data::get_day()
{
	return day;
}
void Data::set_month(int month_)
{
	month = month_;
}
int Data::get_month()
{
	return month;
}
void Data::set_year(int year_)
{
	year = year_;
}
int Data::get_year()
{
	return year;
}
