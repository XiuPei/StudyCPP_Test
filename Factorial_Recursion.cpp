// Factorial_Recursion.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Factorial(int n);

int main()
{
	int number = 0;
	int result = 0;

	cout << "input number = " << endl;
	cin >> number;

	result = Factorial(number);

	cout << number << "! = " << result << endl;
    return 0;
}

int Factorial(int n)
{
	if (n <= 1)
		return 1;

	return n * Factorial(n - 1);
}

