#pragma once
#include <iostream>
//templated class to make dynamic array
template <typename J>
class DynamicArray
{
private:
	//Make the pointer for dynamic array
	J * data;

	//The size of the array
	int size;

	//the amount of index being used
	int amount;

public:
	//constructor for dynamic array
	DynamicArray();

	//creates an array and sets the length of the array
	void MakeArray(int initialSize);

	//inserts a type into the  index of last index used
	void InsertLast(J);

	//removes the last index
	void DeleteLast(J);

	//retrieves the data from the pick index
	J getData(J);
};

template<typename J>
DynamicArray<J>::DynamicArray()
{
}

template<typename J>
void DynamicArray<J>::MakeArray(int initialSize)
{
	//sets the array size and initializes the array
	data = new J[initialSize];
	size = initialSize;
	amount = 0;
}

template<typename J>
void DynamicArray<J>::InsertLast(J newdata)
{
	//checks to see if the array is full
	if (amount == size)
	{
		//extends the amount of usable space by a multiple of 2
		size *= 2;

		//creates another temporary Dynamic Array and sets its length to the multiplied length
		DynamicArray<J>* test = new DynamicArray<J>[size];
		test->MakeArray(size);

		//copies the old array into the temporary array and delets the old
		for (int i = 0; i < amount; i++)
		{
			test->data[i] = data[i];
		}
		delete data;

		//copies the temporary array into the new array then deltes the temporary array
		data = new J[size];

		for (int i = 0; i < amount; i++)
		{
			data[i] = test->data[i];
		}
		delete test;

		//sets the next index to the inputed value and moves to the nex index
		data[amount] = newdata;
		amount += 1;

		return;
	}

	//sets the next index to the inputed value and moves to the nex index
	data[amount] = newdata;
	amount += 1;
}

template<typename J>
void DynamicArray<J>::DeleteLast(J)
{
	//removes the last spot used in the array
	amount -= 1;
}

template<typename J>
inline J DynamicArray<J>::getData(J index)
{
	//returns the value in the specified index
	return data[index];
}