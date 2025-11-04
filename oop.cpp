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


    //loop through
    for(int i=0; i<5; i++){
        std::cout << "(" << points[i].x << " , " << points[i].y << ")" << std::endl;
    }

    
    return 0;
}