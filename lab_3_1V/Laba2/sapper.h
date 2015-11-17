#pragma once
#include "game.h"

class Sapper : virtual public Game
{
public:
	Sapper();
	virtual ~Sapper();
	virtual void print(void);
};