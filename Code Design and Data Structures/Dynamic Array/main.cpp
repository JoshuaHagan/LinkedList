#include "Array.h"


int main()
{
	//make dynamic array
	DynamicArray<int> array;
	//create the array with the exact space
	array.MakeArray(4);
	//Insert a value in the back of the array
	array.InsertLast(2);
	//Insert a value in the back of the array
	array.InsertLast(4);
	//Insert a value in the back of the array
	array.InsertLast(6);
	//Insert a value in the back of the array
	array.InsertLast(8);
	//delete the last value int the index of the array
	array.DeleteLast(2);
	//Print out into the console
	std::cout << array.getData(3) << std::endl;

	system("pause");
	return 0;
}