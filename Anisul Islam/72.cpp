#include <iostream>
using namespace std;

class MyFirstClass
{
    public:
        MyFirstClass(); //Constructor Declaration
    ~MyFirstClass(); //Destructor Declaration
    void display(); //Display Declaration
};

MyFirstClass :: MyFirstClass()
{
    cout << "Constructor Called" <<endl;
}

MyFirstClass :: ~MyFirstClass()
{
    cout << "Destructor Called" <<endl;
}

void MyFirstClass :: display()
{
    cout << "Display Called" <<endl;
}

int main()
{
    MyFirstClass ob;
    ob.display();
    return 0;
}
