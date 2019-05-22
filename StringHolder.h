#pragma once

#include <stdlib.h>
#include <cstring>

class StringHolder {
public:
	StringHolder();
	StringHolder(char* string);

	StringHolder (const StringHolder& src);
	StringHolder& operator=(const StringHolder& src);

	virtual ~StringHolder();

	char* GetString() const;
	void SetString(const char* string);
	bool IsEmpty() const;
	void Erase();

private:
	char* m_String;
	void DeepCopy(const char* string);
};