#include "generator.h"

generator::generator() {
	//iniciate values
	alphabet = "abcdefghijklmnopqrstuvwxyz";
	number = "0123456789";
	symbol = "!@#$%^&*?";
	password = "";
};

string generator::GetRanValue(int Num, string value) {
	int num = Num;
	int i;
	char newvalue[100];
	int length = value.length();

	for (i = 0; i < num; i++)
	{
		newvalue[i] = value[rand() % length];
	}
	newvalue[i] = 0;

	return newvalue;
}

string generator::GeneratePassword() {
	// Generate random values
	alphabet = GetRanValue(NumofAlpha, alphabet);
	number = GetRanValue(NumofNum, number);
	symbol = GetRanValue(NumofSymbol, symbol);

	// Combine all values into one array
	password = alphabet.append(number);
	password.append(symbol);

	// Shuffle the password
	random_shuffle(password.begin(), password.end());
	//cout << password << endl; //Just for check if the final value is correct

	return password;
}