#pragma once

#include <iostream>
#include <string.h>

class Manipulator {
public:
	void Reverse(char* inString);
	void Reverse(char* inString, int left, int right);
	void ReverseWords(char* inString);
	void Replace(char* inString, char target, char replacement);

private:
};