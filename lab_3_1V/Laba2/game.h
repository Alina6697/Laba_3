#pragma once
#include "software.h"

class Game : public Software
{ 
public:
	Game();
	Game(char* string);
	virtual ~Game();
	virtual void print(void);
};