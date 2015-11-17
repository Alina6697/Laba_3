#pragma once


class Data
{
	int day, month, year;

public:
	void set_day(int day);
	int get_day();
	void set_month(int month);
	int get_month();
	void set_year(int year);
	int get_year();
	Data(int day_, int month_, int year_);
	Data();
	~Data();
	void set_data(int day_, int month_, int year_);
};
