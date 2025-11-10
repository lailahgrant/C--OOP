/**
 * Program to demostrate methods in C++
 */

#include <iostream>
#include <vector>

class Point
{
public:
    int x;
    int y;

    void print() const // void print() const {}
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
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