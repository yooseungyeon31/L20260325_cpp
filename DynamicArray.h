#pragma once //한번 include되면 어데에 됐는지 안다. 
#ifndef __DynamicArray_H__ //처음에 디파인이 되어있니? 라고 물어봄
#define __DynamicArray_H__ //안되어있으면 해줘. 

class DynamicArray
{
public:
	DynamicArray()
	{
		Size = 0;
		Data = nullptr;
	}

	~DynamicArray()
	{
		delete[] Data;
		Data = nullptr;
	}

	void PushBack(int InValue)
	{
		Size++;
		//[1] -> [1][2]
		//1. 늘어남 영역 만큼 새로 할당
		int* NewData = new int[Size];

		//2. 원본복제
		for (int i = 0; i < Size - 1; ++i)
		{
			NewData[i] = Data[i];
		}

		//3. 새로 들어온값을 넣는다.
		NewData[Size - 1] = InValue;

		//4. 원래 있건걸 지운다.
		delete[] Data;

		//5. 원래 데이터의 포인터에 새 데이터 포인터 연결
		Data = NewData;

	}

	//함수 뒤에 const readonly 함수임 . readonly는 C++에 있는 키워드는 아니다. 
	//멤버함수 뒤에 붙은거는 readonly라 해준다. -> 다른걸로 바꾸지 않겠다
	inline size_t GetSize() const
	{
		
		return Size;
	}

	//opertator overload
	int&  operator[](int Index) const //연산자를 재정의 한다는 의미//const는 안바꾼다는 의미
	//크기가 큰거를 리턴해주기엔 힘들다. 그러면 포잍러
	{
		return Data[Index];
	}

protected:
	int* Data;
	size_t Size = 0;//64비트 
};



#endif //__DynamicArray_H__
