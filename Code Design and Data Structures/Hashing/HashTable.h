#pragma once

template<typename KeyType, typename T>
class HashTable
{
public:
	HashTable(unsigned int size)
		:m_size(size), m_data(new T[size]) {}
	~HashTable() { delete[] m_data; }

	T& operator [] (const KeyType& key) 
	{
		auto hashedKey = hash(key) % m_size;
		return m_data[hashedKey];
	}

	const T& operator [] (cosnt KeyType& key) const
	{
		auto hasedKey = hash(key) % m_size;
		return m_data[hashedKey]
	}
private:
	//ideally this would be a std::function
	// specified as a template parameter
	unsigned int hashFunction(const KeyType& key);

	T* m_data;
	unsigned int m_size;
};