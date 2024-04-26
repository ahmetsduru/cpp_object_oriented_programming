#include <iostream>

using namespace std;

class person{
    private:
    int salary;
    int id;

    public:

    void set_id(int a);
    int get_id();

    void set_salary(int a);
    int get_salary();
};

int main(){

    person ali;
    ali.set_id(2467);
    ali.get_id();
    ali.set_salary(65000);
    ali.get_salary();


}

void person::set_id(int a){
        if (a <= 999){
            id = 1000;
        }
        else if(a >= 10000){
            id = 9999;
        }
        else{
            id = a;
        }
    }

int person::get_id(){
    cout << id << endl;
    return id;
}

void person::set_salary(int a){
    salary = a;
}

int person::get_salary(){
    cout << salary << endl;
    return salary;
}