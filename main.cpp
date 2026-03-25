//Standart Template Library
#include <iostream>
#include <string>
#include <vector>
#include "String.h"


using namespace std;


int main()
{
	string str1 = "Helllo";
	string str2 = "World";

	string combine = str1 + str2;

	cout << combine << endl;


	return 0;
}


//다이나믹어레이로 문자열 더하기 문자열해서 새로운 문자열 생성되게 하기.
//int main()
//{
//
//	std::string str1 = "Hello ";
//	std::string str2 = "World";
//
//	std::string combine = str1 + str2;
//
//	cout << combine << endl;
//
//
//
//	return 0;
//}