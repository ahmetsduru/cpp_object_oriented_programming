#include <iostream>
#include "geometric_cal.h"

using namespace std;

int main()
{
    shape a;
    triangle b;
    rectangle c;

    cout << b.area_cal(5,8) << endl;
    cout << c.area_cal(5,8) << endl;
    cout << a.area_cal(5,8) << endl;
    shape *p;
    p = &b;
    cout << p -> area_cal(5,8) << endl;
    a.set_height(5);
    a.set_width(8);
    cout << c.circumference_cal(a) << endl; // pass by object
    cout << b.circumference_cal(a) << endl;
    cout << a.area_cal(a.get_height(),a.get_width()) << endl;
    return 0;
}