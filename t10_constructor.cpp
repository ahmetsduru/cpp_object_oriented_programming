#include <iostream> //class ile aynı isimdedir, public olması lazım, return yapmaz

using namespace std;

class human{
    private:
    int age;
    int height;

    public:
    human(){
        age = 0;
        height = 40; 
    }

    int get_age();
    int get_height();
};

int main()
{
    human ali;
    cout << ali.get_age() << endl;
    cout << ali.get_height() << endl;
    return 0;
}

int human::get_age(){
    return age;
}
int human::get_height(){
    return height;
}