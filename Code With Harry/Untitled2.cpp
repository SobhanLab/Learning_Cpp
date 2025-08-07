#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>> age;

    if(age>100 || age<7)
    {
        cout<<"Invalid age";
    }

    else if(age>=18) {
        cout<<"You can vote.";
    }

    else {
        "You cant't vote.";
    }

    return 0;
}

