// Factorial_UseFunction.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Factorial(int n);

int main()
{
	int number;
	int result;

	cout << "Input Number = ";
	cin >> number;

	result = Factorial(number);

	cout << "number! = " << result << endl;

	return 0;
}

int Factorial(int n)
{
	int result = 1;

	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}

	return result;
}


