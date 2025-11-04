#include <iostream>
#include <vector>

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

    //initialize the points
    std::vector<Point> points = {{ 0,1 }, {2,2}, {2,3}, {3,4}, {4,5}};


    //Arrange-based for loop
    for(auto point : points){
        std::cout << "(" << points.x << " , " << points.y << ")" << std::endl;
    }

    //loop through
    for(int i=0; i<5; i++){
        std::cout << "(" << points.at(i).x << " , " << points.at(i).y << ")" << std::endl;
    }

    
    return 0;
}