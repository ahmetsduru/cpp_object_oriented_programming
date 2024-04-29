#include <iostream>

using namespace std;

class complex{
    private:
    
    float real;
    float imaginary;

    public:

    void set_real(float real);
    void set_imaginary(float imaginary);
    float get_real();
    float get_imaginary();
    complex operator+(const complex &c);

};

int main(){

    complex c1,c2,c3;
    
    c1.set_real(4);
    c1.set_imaginary(2);
    c2.set_real(-5);
    c2.set_imaginary(8);

    c3 = c1 + c2;

    cout << c3.get_real() << " i" << c3.get_imaginary() << endl;

    return 0;
}

complex complex::operator+(const complex &c){
    complex sum;
    sum.real = this -> real + c.real;
    sum.imaginary = this -> imaginary + c.imaginary;
    return sum;
}

void complex::set_real(float real){
    this -> real = real;
}
void complex::set_imaginary(float imaginary){
    this -> imaginary = imaginary;
}
float complex::get_real(){
    return real;
}
float complex::get_imaginary(){
    return imaginary;
}