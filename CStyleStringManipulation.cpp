#include <iostream>
#include "Manipulator.h"
#include "StringHolder.h"

using namespace std;

void TestManipulator() {
	char testString[] = "Hello World!";

	Manipulator manipulator;
	manipulator.ReverseWords(testString);

	cout << "Received back: " << testString << endl;
}

void TestStringHolders() {
	char testString[] = "Hello World!";
	StringHolder sh1;
	StringHolder sh2(testString);

	sh1 = sh2;

	char testString2[] = "Bye world!";

	sh2.SetString(testString2);

	cout << "First string is: " << sh1.GetString() << endl;
	cout << "Second string is: " << sh2.GetString() << endl;
}

int main() {
	TestStringHolders();

	cin.get();
}