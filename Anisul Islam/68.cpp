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

    void SetValue(int x, double y)
    {
        ID = x;
        CGPA = y;
    }
};

int main()
{
    Student Robin, Alim, Atik;

    Robin.SetValue(69, 2.66);
    Robin.display();

    Alim.SetValue(73, 2.34);
    Alim.display();

    Atik.SetValue(76, 2.96);
    Atik.display();


    return 0;
}


