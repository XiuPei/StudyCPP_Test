
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

int main()
{
	// default constructors
	// Point pt1; 

	// constructors(argument)
	//Point pt1(3, 5);

	// copy constructors
	Point pt1(100, 100), pt2(200, 200);

	Point pt3 = pt1;
	pt3.Print();

	pt3 = pt2;
	pt3.Print();

    return 0;
}

