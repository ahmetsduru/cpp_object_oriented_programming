#ifndef GEOMETRIC_CAL_
#define GEOMETRIC_CAL_
#include <iostream>

class shape{
    protected:
    int height;
    int width;

    public:
    virtual int area_cal(int height, int width);
    void set_height(int height);
    void set_width(int width);
    int get_height();
    int get_width();
};

class triangle : public shape{

    public:
    int area_cal(int height, int width);
    int circumference_cal(shape &a);
};

class rectangle : public shape{

    public:
    int area_cal(int height, int width);
    int circumference_cal(shape a);

};

#endif