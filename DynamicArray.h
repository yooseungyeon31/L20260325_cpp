#pragma once
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

class DynamicArray
{
public:
	DynamicArray()
	{
		Size = 0;
		data = nullptr;

	}
	~DynamicArray()
	{
		delete[] data;
		data = nullptr;

	}

	void PushBack(int InValue)
	{
		Size++;

		int* NewData = new int[Size];

		for (int i = 0; i < Size - 1; i++)
		{
			NewData[i] = data[i];
		}

		NewData[Size - 1] = InValue;

		delete[] data;

		data = NewData;
	}

	inline int GetSize()
	{
		return Size;
	}

	int* data;
	int Size = 0;

};





#endif
