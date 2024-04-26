#include <iostream>

using namespace std;

class animal{ // base class
    public:

    void eat();
    void sleep(); 

};

class dog : public animal{ // derived class
    public:

    void bark();
};

int main()
{
    dog kangal;
    kangal.eat();
    kangal.sleep();
    kangal.bark();

}

void animal::sleep(){
    cout << "it can sleep" << endl;
}

void animal::eat(){
    cout << "it can eat" << endl;
}

void dog::bark(){
    cout << "it can bark" << endl;
}