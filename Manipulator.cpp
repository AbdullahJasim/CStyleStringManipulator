#include "Manipulator.h"

void Manipulator::Reverse(char* inString) {
	Reverse(inString, 0, strlen(inString) - 1);
}

void Manipulator::Reverse(char* inString, int left, int right) {
	if (inString == nullptr || strlen (inString) == 0) return;
	if (right > strlen(inString)) return;

	while (left < right) {
		char temp = inString[left];
		inString[left] = inString[right];
		inString[right] = temp;

		++left;
		--right;
	}
}

void Manipulator::ReverseWords(char* inString) {
	Reverse(inString);

	int i = 0, j = 0;

	while (i < strlen(inString) - 1) {
		while (inString[i] != ' ' && inString[i] != '\0') ++i;

		Reverse(inString, j, i - 1);
		j = ++i;
	}

	return;
}

void Manipulator::Replace(char* inString, char target, char replacement) {
	int i = 0;

	while (i < strlen(inString)) {
		if (inString[i] == target) inString[i] = replacement;

		++i;
	}

	return;
}