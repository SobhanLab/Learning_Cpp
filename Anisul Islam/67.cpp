#include <iostream>
using namespace std;

class Student
{
    public:
    int ID;
    double CGPA;

    void display()
    {
        cout << ID << " - " << CGPA <<endl;
    }
};

int main()
{
    Student Robin, Alim, Atik;
    Robin.ID = 69;
    Robin.CGPA = 2.66;
    Robin.display();

    Alim.ID = 75;
    Alim.CGPA = 2.43;
    Alim.display();

    Atik.ID = 76;
    Atik.CGPA = 3.21;
    Atik.display();


    return 0;
}

