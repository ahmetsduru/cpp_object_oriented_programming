#include <iostream>

using namespace std;

class shape{

    protected:
    int width;
    int height;

    public:
    virtual int calculate_area(int width, int height); // virtual derived class ın metoduna göre işlem yapmayı sağlar


};

class triangle : public shape{

    public:
    
    int calculate_area(int width, int height); // function overriding

};

class rectangle : public shape{

    public:

    int calculate_area(int width, int height); 
};

int main(){

    triangle a;
    rectangle b;
    shape c;

    cout << "triangle: " << a.calculate_area(10,5) << endl;
    cout << "rectangle: " << b.calculate_area(10,5) << endl;
    cout << "shape: " << c.calculate_area(10,5) << endl;

    shape *p;
    p = &a;
    cout << "triangle: " << p -> calculate_area(10,5) << endl;

    return 0;
}

int triangle::calculate_area(int width, int height){
    this -> width = width;
    this -> height = height;
    return (width*height)/2;
}
int rectangle::calculate_area(int width, int height){
    this -> width = width;
    this -> height = height;
    return width*height;
}

int shape::calculate_area(int width, int height){
    this -> width = width;
    this -> height = height;
    return 0;
}