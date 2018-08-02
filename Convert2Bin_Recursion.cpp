// Convert2Bin_Recursion.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void Convert2Bin(int n)
{
	if (n <= 0)
		return;

	Convert2Bin(n / 2);

	cout << n % 2; 
}

int main()
{
	int number = 0;
	cout << "input number = ";
	cin >> number;
	cout << endl;

	Convert2Bin(number);

	cout << endl;

	return 0;
}

