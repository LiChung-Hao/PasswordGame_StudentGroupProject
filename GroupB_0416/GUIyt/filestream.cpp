#include "filestream.h"

string filestream::Combine() {
	info.append(account);
	info.append(" | ");
	info.append(password);
	info.append("\n");

	return info;
}

void filestream::SaveInTxt() {
	stream.open("info.txt", ios::app); //append to the end of the file, not rewrite it
	stream << info;
	stream.close();
}
