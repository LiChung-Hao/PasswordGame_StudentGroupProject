#pragma once
#include <iostream>
#include <fstream>
#include <time.h>
#include <string.h>
#include <random>
#include <msclr\marshal_cppstd.h>//sys string to std string
using namespace std;
using namespace System;

class generator
{
private:
	string alphabet;
	string number;
	string symbol;

protected:
	string info;

public:
	generator();

public:
	int NumofAlpha;
	int NumofNum;
	int NumofSymbol;

	string password;
	
	string GetRanValue(int Num, string value);
	string GeneratePassword();
};

