// C++ program withou classes


#include <iostream>

int main(){
    // ponts are (x,y) cordinates:
        // (0,1)
        // (2,2)
        // (2,3)
        // (3,4)
        // (4,5)

    //create an array of 5 
    int x[5];
    int y[5];

    x[0] = 0;
    y[0] = 1;

    x[1] = 2;
    y[1] = 2;

    x[2] = 2;
    y[2] = 3;

    x[3] = 3;
    y[3] = 4;

    x[4] = 4;
    y[4] = 5;

    //loop through
    for(int i=0; i<5; i++){
        std::cout << "(" << x[i] << " , " << y[i] << ")" << std::endl;
    }

    return 0;
}