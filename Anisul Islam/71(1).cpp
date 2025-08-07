#include <iostream>
using namespace std;

class MyFirstClass
{
    public:
        MyFirstClass();
        void display();
};

MyFirstClass::MyFirstClass()
{
    cout << "Inside Constructor" <<endl;
}

void MyFirstClass::display()
{
    cout << "Inside Display Function" <<endl;
}

int main()
{
    MyFirstClass ob1;
    ob1.display();
    return 0;
}

