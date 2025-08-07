#include<iostream>
#include<string>

using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string sub;

    void changeDept(string newDept) {
        dept = newDept;
    }
    //setter
    void setSalary(double s) {
        salary = s;
    }
    //getter
    double getSalary() {
        return salary;
    }
};

class Student {
public:
    string name;
    string dept;
    string sub;
};

int main() {
    Teacher t1;
    t1.name = "Sobhan";
    t1.sub = "C++";
    t1.dept = "CSE";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
