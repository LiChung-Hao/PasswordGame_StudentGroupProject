#include "counter.h"

void counter::Counter()
{
	if (nCount <= 0)
	{
		str = "Save it!";
	}
	else
	{
		Sleep(1000);
		nCount--;
		Counter();
	}
}