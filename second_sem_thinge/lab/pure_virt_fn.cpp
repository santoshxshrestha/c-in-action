// Define a class shape with a pure virutal function area().
// Derive classes Rectangle, Circle and override the area() method
// Author : Santosh Shrestha
#include <iostream>
using namespace std;
class Shape {
    public:
        virtual float area()=0 ;
};
class Rectangle : public Shape {
    float length, breadth;
    public: 
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    float area(){
        return length * breadth;
    }
};
class Circle : public Shape {
    float radius;
    public:
    Circle(float r) {
        radius = r;
    }
    float area() {
        return 3.14 * radius * radius;
    }
};
int main(){
    Shape *s1 = new Rectangle(10, 5);
    Shape *s2 = new Circle(7);
    
    cout << "Area of Rectangle: " << s1->area() << endl;
    cout << "Area of Circle: " << s2->area() << endl;

    delete s1;
    delete s2;

    return 0;
}