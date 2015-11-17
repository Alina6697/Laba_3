#pragma once;
#include <string>
using namespace std;

class Software 
{
	string name;
	string developer;

protected:
	static Software *head;

public:

	Software *next;
	
	Software(){};
	Software(string name_, string developer_);
	virtual ~Software(){};

	void set_name(string);
	string get_name();

	void set_developer(string);
	string get_developer();
	
	virtual void add() = 0;
	virtual void prit()=0;
	static void show();
};
