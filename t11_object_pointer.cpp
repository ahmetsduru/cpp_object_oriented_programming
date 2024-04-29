#include <iostream>

using namespace std;

class human{

    private:
    int weight;

    public:
    int eating(int a);
    void set_weight(int weight);
    int get_weight();

};

int main(){

    human ali;
    ali.set_weight(80);
    cout << ali.get_weight() << endl;
    ali.eating(4);
    cout << ali.get_weight() << endl;

    human *p;
    p = &ali;
    p -> eating(3);
    cout << ali.get_weight() << endl;

}

int human::eating(int a){
    weight = weight + a;
    return weight;
}

void human::set_weight(int weight){
    this -> weight = weight;
}

int human::get_weight(){
    return weight;
}