#include <iostream>

using namespace std;

class human{
    
    protected:
    float weight;

    public:
    int phone;
    string address;

    float get_weight();
    void set_weight(float a);
    void eating();

};

class employee : public human{
    
    protected:
    float salary;
    float tax;

    public:
    float get_salary();
    void set_salary(float a);
    float get_tax();
    void set_tax(float a);

};

class engineer : public employee{
    protected:
    float performance;

    public:
    void performance_criteria(engineer a);
    void set_performance(float a);

};

int main()
{
    engineer ahmet;
    ahmet.set_salary(55000.23);
    ahmet.get_salary();
    ahmet.set_performance(6.8);
    ahmet.performance_criteria(ahmet);
    ahmet.get_salary();
    ahmet.set_tax(2000.5);
    ahmet.get_tax();
    ahmet.set_weight(78.2);
    ahmet.get_weight();
    ahmet.eating();
    ahmet.get_weight();

    return 0;
}

void engineer::set_performance(float a){
    performance = a;
}

void engineer::performance_criteria(engineer a){
    salary += a.performance;
}

float human::get_weight(){
    cout << "weight: " << weight << endl;
    return weight;
}

void human::set_weight(float a){
    weight = a;
}

void human::eating(){
    weight += 1.2;
}

float employee::get_salary(){
    cout << "salary: " << salary << endl;
    return salary;
}

void employee::set_salary(float a){
    salary = a;
}

float employee::get_tax(){
    cout << "tax: " << tax << endl;
    return tax;
}

void employee::set_tax(float a){
    tax = a;
}

