// Destructor.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class DynamicArray
{
public:
	int* arr;

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize)
{
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray()
{
	delete[] arr;
	arr = NULL;
}

int main()
{
	int size;
	cout << "몇 개의 정수를 입력하시겠습니까? \n";
	cin >> size;

	// memory set
	DynamicArray da(size);
	
	// Input integer
	for (int i = 0; i < size; ++i)
		cin >> da.arr[i];

	for (int j = size - 1; j >= 0; --j)
		cout << da.arr[j] << " ";

	cout << endl;

    return 0;
}

