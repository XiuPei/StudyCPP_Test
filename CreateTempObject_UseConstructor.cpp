
#include "stdafx.h"
#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;

	void Print();

	Point();		// default constructors
	Point(int initialX, int initialY);	// constructors(parameter)
	Point(const Point& pt);			// copy constructors
};

void Point::Print()
{
	cout << "{ " << x << ", " << y << " }\n";
}

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int initialx, int initialY)
{
	x = initialx;
	y = initialY;
}

Point::Point(const Point& pt)
{
	cout << "copy constructors" << endl;
	x = pt.x;
	y = pt.y;
}

void Area(const Point& pt)
{
	// Triangle area of {0,0} ~ pt
	int area = pt.x * pt.y;

	cout << "{0, 0}과 이루는 사각형의 면적 = " << area << endl;
}

int main()
{
	int x = 5; 
	int y = 7;

	Point Temp(x, y);

	Area(Temp);

	return 0;
}

