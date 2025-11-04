<div align="center">
    <a href="#" target="_blank">
      <img src="public/preview.png" alt="C Object Programming">
    </a>
  <h3 align="center">C++ Object Oriented Programming</h3>
</div>

##  <br /> 📋 <a name="table">Table of Contents</a>

- ✨ [Introduction](#introduction)
- ⚙️ [How to Compile C++ programs](#compile-C++-program)
- 🔋  [What is a Class and Object?](#Class-object)
- 🚀 [Difference between a Class and Object](#Class-and-Object)
- ⚙️ [Vectors](#vectors)

##  <br /> <a name="introduction">✨ Introduction</a>

C++ Object Oriented Programming crash course by Caleb.
Object Oriented Programming using C++. This involves using `Classes` and `Objects` in software.


##  <br /> <a name="compile-C++-program">⚙️ How to Compile C++ programs</a>

#### To Use
- [x] Install a `C++` compiler (g++ compiler)
- [x] In the command line, run `g++`
- [x] To compile a file, run `g++ oop.cpp`
  - [ ] The above command creates a file `a.out`
  - [ ] Execute the `a.out` file in CLI as `./a.out`
- [x] Basic C++ program as follows:
```c
#include <iostream>

int main(){
    std::cout << "Hello World" << std::endl;
    return 0;
}
```

##  <br /> <a name="class">✨ What is a Class?</a>

`Struct` and `Class` are nearly the same in C++.

- [x] A class describes the structure of data
  - [ ] A blueprint to make one's own type of data
  - [ ] class declaration, - add a `;` after class
  - [ ] declare a class before `int main()`

```c++
#include <iostream>
class Point {

};

int main(){

}
```


#### C++ program WITHOUT Classes

- A program clone of a `Google Map` or `Location in a game`

```c
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
```


#### C++ program WITH Classes

```c++
#include <iostream>

class Point {
    public:
       int x;
       int y; 
};

int main(){
    // ponts are (x,y) cordinates:
        // (0,1)
        // (2,2)
        // (2,3)
        // (3,4)
        // (4,5)

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
```

#### C++ program with Classes
```c++
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

    //create an array of 5 
    Point points[5];
    points[0].x = 50;

    //loop through
    for(int i=0; i<5; i++){
        std::cout << "(" << points[i].x << " , " << points[i].y << ")" << std::endl;
    }

    //create a Point object (blueprint)
    Point p;
    p.x = 5;
    p.y = 10;

    Point l;
    l.x = 40;
    l.y = 20;

    std::cout << "(" << p.x << " , " << p.y << ")" << std::endl;
    std::cout << "(" << l.x << " ," << l.y << ")" << std::endl;

    return 0;
}
```

> - Create an object from a class


##  <br /> <a name="Class-object">✨ Difference between a Class and Object</a>

| Class                                               | Object                                                 |
| --------------------------------------------------- | ------------------------------------------------------ |
| Class is the blueprint that describes the structure | Object is when we create an example from the blueprint |
| Class defines the structure                         | Object is an instance of the structure                 |

- [x] Class is a new datatype
- [x] Instantiate an object from a class
- [ ] class -> object (instantiate)

##  <br /> <a name="vector">⚙️ Vectors</a>

> Vector - new fancy templatized type

- [x] Include vector `#include <vector>`
- [x] Create a vector instead of an array


| Private                                             | Known as *live*                                        |