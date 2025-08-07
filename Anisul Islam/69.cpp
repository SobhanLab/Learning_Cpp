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

    Student(int x, double y)
    {
      ID = x;
      CGPA = y;
    }

};

int main()
{
    Student Robin(69, 2.66);
    Robin.display();

    Student Alim(73, 2.34);
    Alim.display();

    Student Atik(76, 2.96);
    Atik.display();


    return 0;
}
