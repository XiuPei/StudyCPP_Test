// CompareEnvironment_FunctionPointer.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

typedef void(*SYSTEM_FUNC) ();

void ForWindow10();
void ForWindow7();
bool IsWindow7(int n);
void ImportantFunc(SYSTEM_FUNC pfnSyst);

int main()
{
	SYSTEM_FUNC pfn;

	int systemNumber = 0;

	cout << "Input Environment number" << endl;
	cout << "---------------------------------" << endl;
	cout << "1 = window10 / 2 = window 7" << endl;
	cin >> systemNumber;

	if (IsWindow7(systemNumber))
		pfn = &ForWindow7;
	else
		pfn = &ForWindow10;

	ImportantFunc(pfn);

    return 0;
}

void ForWindow10()
{
	cout << "window 10" << endl;
}

void ForWindow7()
{
	cout << "window 7" << endl;
}

bool IsWindow7(int n)
{
	if (n == 1)
		return false;
	else if (n == 2)
		return true;
}

void ImportantFunc(SYSTEM_FUNC pfnSyst)
{
	(*pfnSyst) ();

}


