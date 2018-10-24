#include "HashFunction.h"
#include "HashTable.h"

unsigned int HashFunction::badHash(const char * data, unsigned int length)
{
	unsigned int hash = 0;
	for (unsigned int i = 0; i < length; ++i)
		hash += data[i];
	return hash;
}

unsigned int HashFunction::hash(const char * data, unsigned int length)
{
	unsigned int hash = 100;
	for (unsigned int i = 0; i < length; ++i)
	{
		hash += data[i];
		return hash;
	}
}

int main()
{

}
