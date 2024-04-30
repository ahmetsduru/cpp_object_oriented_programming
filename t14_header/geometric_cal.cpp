#include <iostream>
#include "geometric_cal.h"

using namespace std;

int shape::area_cal(int height, int width){
    cout << "shape in içindeki area_cal çalıştı" << endl;
    return 0;
}
void shape::set_height(int height){
    this -> height = height;
}
void shape::set_width(int width){
    this -> width = width;
}
int shape::get_height(){
    return height;
}
int shape::get_width(){
    return width;
}

int triangle::area_cal(int height, int width){
    return (height*width)/2;
}
int triangle::circumference_cal(shape &a){
    return 3*a.get_width();
}

int rectangle::area_cal(int height, int width){
    return height*width;
}

int rectangle::circumference_cal(shape a){
    return 2*(a.get_height() + a.get_width());
}