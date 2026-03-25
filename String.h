#pragma once
#include <string>


class String
{
public:
	String()
	{
		StrData = 0;
		len = 0;
		Size = 0;
	}

	~String()
	{
		delete[] StrData;
		StrData = nullptr;

	}


    String Append(const char* OtherStr)
    {
        int OtherSize = strlen(OtherStr);
        int NewSize = Size + OtherSize;
        
        char* NewData = new char[NewSize + 1];

        // 1. 기존 문자열 복사
        if (StrData) strcpy(NewData, StrData);
        
        // 2. 뒤에 새로운 문자열 이어 붙이기
        strcat(NewData, OtherStr);

        // 실제로는 새 객체를 반환하거나 멤버를 갱신해야 합니다.
        String Result(NewData);
        delete[] NewData; // 생성자에서 복사하므로 임시 메모리 해제
        return Result;
    }

	char* StrData;
	int len;
	int Size;
};


