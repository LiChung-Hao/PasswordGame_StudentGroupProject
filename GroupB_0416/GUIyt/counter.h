#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

class counter
{
public:
	counter() {
		str = "";
		nCount = 5;
	}

public:
	string str;
	int nCount;
	void Counter();
};
