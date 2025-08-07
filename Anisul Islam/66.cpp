#include <iostream>
using namespace std;

class Student
{
    public:
    int id;
    double CGPA;
};

int main()
{
    Student Robin;
    Robin.id = 69;
    Robin.CGPA = 2.66;
    cout << Robin.id <<endl;
    cout << Robin.CGPA <<endl;

    Student Alim;
    Alim.id = 75;
    Alim.CGPA = 2.43;
    cout << Alim.id <<endl;
    cout << Alim.CGPA <<endl;

    return 0;
}
