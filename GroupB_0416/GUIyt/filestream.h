#pragma once
#include "generator.h"
#include "counter.h"

class filestream : protected generator, public counter
{
private:
	ofstream stream;

public:
	string account;
	string password;
	string Combine();
	void SaveInTxt();
};

