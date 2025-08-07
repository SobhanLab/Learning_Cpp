#include <iostream>
using namespace std;

class MyFirstClass
{
    public:
    void display(); //Display Declaration
};

void MyFirstClass :: display()
{
    cout << "Display Called" <<endl;
}

int main()
{
    MyFirstClass ob;
    MyFirstClass *p = &ob; //pointer
    p ->display();

    return 0;
}

