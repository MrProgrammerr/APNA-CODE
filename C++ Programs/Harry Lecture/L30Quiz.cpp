#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    float x, y;
    friend double distance(Point, Point);

public:
    Point(float a, float b)
    {
        x = a;
        y = b;
    }
};
double distance(Point p1, Point p2)
{
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

int main()
{
    Point p1(1, 0);
    Point p2(70, 0);
    cout << "Distance = " << distance(p1, p2);
    return 0;
}