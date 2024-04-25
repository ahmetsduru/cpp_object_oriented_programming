#include <iostream>

using namespace std;

class food{
    public: // access modifier
    string color;
    int age;
    int calori; // attributes

    string set_color() // method (inside class definition)
    {
        if (age > 4){
            color = "black";
        }
        return color;
    }

    int set_calori();

    float heating(float time);

};

float food::heating(float time){
    if (time < 500){
        calori += time;
    }
    return calori;
}

int food::set_calori(){ // method (outside class definition)
    if (age > 4){
        calori = 0;
    }
    return calori;
}

class human{
    public:
    float weight;
    int height;
    int age;

    float eating(food a){
        weight += a.calori/5000.0;
        return weight;
    }
};

int main()
{
    food banana;
    banana.color = "yellow";
    banana.age = 3;
    banana.calori = 2500; 

    cout << "color: " << banana.color << " age: " << banana.age << " calori: " << banana.calori << endl;
    banana.set_color();
    banana.set_calori();
    cout << "color: " << banana.color << " age: " << banana.age << " calori: " << banana.calori << endl;

    human ahmet;
    ahmet.height = 177;
    ahmet.age = 34;
    ahmet.weight = 78;
    cout <<"weight: " << ahmet.weight << " height: " << ahmet.height << " age: " << ahmet.age << endl;

    ahmet.eating(banana);

    cout <<"weight: " << ahmet.weight << " height: " << ahmet.height << " age: " << ahmet.age << endl;
    banana.heating(480);
    ahmet.eating(banana);
    cout <<"weight: " << ahmet.weight << " height: " << ahmet.height << " age: " << ahmet.age << endl;

}