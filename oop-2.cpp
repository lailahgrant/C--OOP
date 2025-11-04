// C++ with classes

#include <iostream>

class Point {
    public:
       int x;
       int y; 
};

int main(){
    // points are (x,y) cordinates:
        // (0,1)
        // (2,2)
        // (2,3)
        // (3,4)
        // (4,5)

    //create an array of 5 
    Point points[5];
    points[0].x = 50;
    points[1].y = 30;


    //create a Point object (blueprint)
    Point p;
    p.x = 5;
    p.y = 10;

    Point l;
    l.x = 40;
    l.y = 20;

    std::cout << "(" << p.x << " , " << p.y << ")" << std::endl;
    std::cout << "(" << l.x  << " ," << l.y << ")" << std::endl;

    return 0;
}