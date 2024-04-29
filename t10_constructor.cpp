#include <iostream> //class ile aynı isimdedir, public olması lazım, return yapmaz

using namespace std;

class human{
    private:
    int age;
    int height;

    public:
    human(){ // constructor
        age = 0;
        height = 40; 
    }

    human(int age)
    : height{42} // default constructor
    {  
        this -> age = age;
    }

    human(int age, int height);

    int get_age();
    int get_height();
};

int main()
{
    human ali(24);
    cout << ali.get_age() << endl;
    cout << ali.get_height() << endl;
    human veli(35,175);
    cout << veli.get_age() << endl;
    cout << veli.get_height() << endl;
    return 0;
}

int human::get_age(){
    return age;
}
int human::get_height(){
    return height;
}
human::human(int age, int height){ // constructor declared outside the class
    this -> age = age;
    this -> height = height;
}