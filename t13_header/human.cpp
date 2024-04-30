#include <iostream>
#include "human.h"

using namespace std;

void employee::eating(){
    weight = weight + 1;
}

void employee::salary_increasing(int salary){
    this -> salary += salary; 
}