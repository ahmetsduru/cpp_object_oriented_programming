#include <iostream>

using namespace std;

class rectangle{
    private:
    int width;
    int height;

    public:

    void set_width(int width);
    int get_width();
    void set_height(int height);
    int get_height();
    rectangle operator+(const rectangle &d);
    rectangle operator-(const rectangle &d);

};

int main(){

    rectangle a1;
    a1.set_height(20);
    a1.set_width(12);
    cout << a1.get_height() << endl;
    cout << a1.get_width() << endl;

    rectangle a2;
    a2.set_height(13);
    a2.set_width(6);
    cout << a2.get_height() << endl;
    cout << a2.get_width() << endl;

    rectangle sum = a1 + a2;

    cout << sum.get_height() << endl;
    cout << sum.get_width() << endl;

    rectangle subraction = a1 - a2;

    cout << subraction.get_height() << endl;
    cout << subraction.get_width() << endl;

    return 0;
}

void rectangle::set_height(int height){
    this -> height = height;
}
void rectangle::set_width(int width){
    this -> width = width;
}

int rectangle::get_height(){
    return height;
}
int rectangle::get_width(){
    return width;
}

rectangle rectangle::operator+(const rectangle &d){ // operator overloading
    rectangle r1;
    r1.height = this -> height + d.height;
    r1.width = this -> width + d.width;
    return r1;
}
    
rectangle rectangle::operator-(const rectangle &f){ //operator overloading
    rectangle r2; 
    r2.height = this -> height - f.height;
    r2.width = this -> width - f.width;
    return r2;
}