#include <iostream>
using namespace std;

class NewClass
{
public:
    void display1() const;
    void display2();
};

void NewClass :: display1() const
{
    cout << "I am Constant." <<endl;
}

void NewClass :: display2()
{
    cout << "I am not a Constant." <<endl;
}

int main()
{
   const NewClass ob;
   ob.display1();

   NewClass ob2;
   ob2.display2();

   return 0;
}

