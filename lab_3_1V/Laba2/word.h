#pragma once;
#include "stdafx.h"
#include "data.h"
#include "word_processor.h"

class Word: public WordProcessor, public Data
{
public:
	Word();
	~Word();
	void set_data(int day_, int month_, int year_);
};

