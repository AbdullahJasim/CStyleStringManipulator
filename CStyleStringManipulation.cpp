#include <iostream>
#include "Manipulator.h"

using namespace std;

int main() {
	char testString[] = "Hello World!";

	Manipulator m;
	m.Replace(testString, 'o', 'u');

	cout << "Received back: " << testString << endl;

	cin.get();
}