#pragma once
#include <functional>

namespace HashFunction
{
	typedef std::function< unsigned int(const char*, unsigned int)> HashFunc;
	//implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length);
	//Add your functions here
	unsigned int hash(const char* data, unsigned int length);
	//a helper to access a default hash function
	static HashFunc;
}
