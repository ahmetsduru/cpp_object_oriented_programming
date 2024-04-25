#include <iostream>

using namespace std;

class car{
    public:
    int year;
    float tank_capacity;
    float available_fuel;

};

class payment{
    public:
    
    float pay_fuel(car a){
        float fuel_fee;
        fuel_fee = (a.tank_capacity - a.available_fuel)*44.5;
        a.available_fuel += a.tank_capacity-a.available_fuel;
        cout << "current fuel: " << a.available_fuel << endl;
        cout << "fuel fee: " << fuel_fee << endl;

        return fuel_fee;
    }

    float pay_tax(car a){
        float tax_fee;
        if(a.year > 2018){
            tax_fee = 4000.0*0.8;
        }
        else{
            tax_fee = 4000.0*0.45;
        }
        return tax_fee;
    }

};


int main(){
    car audi;
    audi.available_fuel = 13.6;
    audi.tank_capacity = 50;
    audi.year = 2015;

    car mercedes;
    mercedes.available_fuel = 32.3;
    mercedes.tank_capacity = 60;
    mercedes.year = 2021;

    payment fees;

    cout << "available fuel: " << audi.available_fuel << endl;
    fees.pay_fuel(audi);
    cout << "tax fee: " << fees.pay_tax(audi) << endl;

    cout << "available fuel: " << mercedes.available_fuel << endl;
    fees.pay_fuel(mercedes);
    cout << "tax fee: " << fees.pay_tax(mercedes) << endl;
    cout << "available fuel: " << mercedes.available_fuel << endl;

}