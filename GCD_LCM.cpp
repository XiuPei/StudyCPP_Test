// GCD_LCM.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void GCD_LCM(int a, int b, int* pgcd, int* plcm)
{
	int z; 
	int x = a;
	int y = b;

	while (true)
	{
		z = x % y;

		if (z == 0)
			break;

		x = y;
		y = z;
	}
	
	*pgcd = y;
	*plcm = a * b / *pgcd;
}

int main()
{
	int gcd = 0;
	int lcm = 0;

	GCD_LCM(28, 35, &gcd, &lcm);

	cout << "GCD = " << gcd << endl;
	cout << "LCM = " << lcm << endl;

    return 0;
}

