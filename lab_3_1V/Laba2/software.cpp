#include "stdafx.h"
#include "software.h"
#include "iostream"
#include "string"
using namespace std;

Software::Software(string name_,string developer_)
{
	name = name_;
	developer = developer_;
};

void Software::set_name(string name_)
{
	name = name_;
}
string Software::get_name()
{
	return name;
}

void Software::set_developer(string developer_)
{
	developer = developer_;
}
string Software::get_developer()
{
	return developer;
}

