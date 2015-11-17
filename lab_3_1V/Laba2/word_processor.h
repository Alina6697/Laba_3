#pragma once;
#include "software.h"

class WordProcessor :public Software
{
	
public:
	WordProcessor();
	~WordProcessor();
	void set_user(char* string);//izmenenie pol`zovatelya
	char* get_user();//vozvrachenie pol`zovetelya
	void print_user();//vyvod pol`zovatelya
};