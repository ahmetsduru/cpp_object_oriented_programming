#include <iostream>
#include "human.h"
using namespace std;

int main(){
    employee ahmet;
    ahmet.salary = 5520;
    cout << "salary: " << ahmet.salary << endl;
    ahmet.weight = 78;
    cout << "weight: " << ahmet.weight << endl;
    ahmet.salary_increasing(265);
    ahmet.eating();
    cout << "salary: " << ahmet.salary << endl;
    cout << "weight: " << ahmet.weight << endl;

    return 0;
}