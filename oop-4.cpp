#include <iostream>
#include <vector>
#include <cmath>

class Point
{
public:
    int x;
    int y;

    void print() const // void print() const {}
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    // will have some decimal points
    double distanceTo(const Point& other) const
    {
        // distance formulae
        int xDiff = x - other.x;
        int yDiff = y - other.y;
        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }
};

int main()
{
    // points are (x,y) cordinates:
    // (0,1)
    // (2,2)
    // (2,3)
    // (3,4)
    // (4,5)

    // initialize the points
    std::vector<Point> points = {{0, 1}, {2, 2}, {2, 3}, {3, 4}, {4, 5}};

    std::cout << "Distance: " << points.at(0).distanceTo(points.at(4)) << std::endl;

    // Arrange-based for loop
    // for (const auto& point: points)
    for (const auto& point : points) // creates a variable print of type prints
    { 
        point.print();
    }

    /**
    * naming convensions
    Point --> class
    point --> object (an instance of that class)
    points --> collection of objects
    */

    return 0;
}