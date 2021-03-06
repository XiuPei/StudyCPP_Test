

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
	int x; 
	int y;
};

double Distance(Point& r1, Point& r2);

int main()
{
	Point r1 = { 0, 0 };
	Point r2 = { 3, 4 };

	double result = Distance(r1, r2);

	cout << result << endl;

    return 0;
}

double Distance(Point& r1, Point& r2)
{
	double result;

	result = sqrt(pow((r1.x - r2.x), 2) + pow((r1.y - r2.y), 2));

	return result;
}

