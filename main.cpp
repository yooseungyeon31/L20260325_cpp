//Standart Template Library
#include <iostream>
#include <vector>
#include "DynamicArray.h"
#include "DynamicArray.h"

using namespace std;



int main()
{
	std::vector<int> IntArray;

	DynamicArray OurArray;

	int Size;

	for (int i = 0; i < 100; i++)
	{
		
		IntArray.push_back(i);
	}

	
	cout << IntArray.size() << endl;
	cout << IntArray.capacity() << endl;


	return 0;
}
