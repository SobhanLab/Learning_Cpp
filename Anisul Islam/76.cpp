#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    const int admissionFee;
    const int examFee;
    int id;


    Student(int x, int y, int z)
    :admissionFee(x), examFee(y)
    {
        cout << admissionFee <<endl;
        cout << examFee <<endl;
        id = z;
        cout<<"ID = " <<id;
    }
};


int main()
{
    Student s1(5000, 500, 69);
   return 0;
}


