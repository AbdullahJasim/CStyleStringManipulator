#include "StringHolder.h"

StringHolder::StringHolder() {
	m_String = nullptr;
}

StringHolder::StringHolder(char* string) {
	DeepCopy(string);
}

StringHolder::StringHolder(const StringHolder& src) {
	DeepCopy(src.GetString());
}

StringHolder& StringHolder::operator=(const StringHolder& src) {
	if (&src == this) return *this;

	SetString(src.GetString());
	return *this;
}

StringHolder::~StringHolder() {
	Erase();
}

char* StringHolder::GetString() const {
	return m_String;
}

void StringHolder::SetString(const char* string) {
	Erase();
	DeepCopy(string);
}

bool StringHolder::IsEmpty() const {
	return (m_String == nullptr) ? true : false;
}

void StringHolder::DeepCopy(const char* string) {
	m_String = new char[strlen(string) + 1];
	strcpy_s(m_String, strlen(string) + 1, string);
}

void StringHolder::Erase() {
	if (IsEmpty()) return;
	delete[] m_String;
	m_String = nullptr;
}