#include <iostream>

using namespace std;

class Car{ // class
    public: // access modifier
    string brand;
    string model;
    int year;
    int milliage; // attributes
};

int main()
{
    Car audi; // object
    audi.brand = "AUDI";
    audi.model = "A3";
    audi.year = 2015;
    audi.milliage = 105000;

    cout << "Brand: " << audi.brand << " Model: " << audi.model << " Year: " << audi.year << " Milliage: " << audi.milliage << endl;

    return 0;
}