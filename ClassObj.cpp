//cpp code for creating class and it's objects 
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int regNo;
    string course;

public:
    Student(const string& n, int reg, const string& c) : name(n), regNo(reg), course(c) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    string n1, c1, n2, c2;
    int r1, r2;
    
    cout << "ENTER NAME OF STUDENT 1:" << endl;
    cin >> n1;
    cout << "ENTER REGD NO OF STUDENT 1:" << endl;
    cin >> r1;
    cout << "ENTER COURSE OF STUDENT 1:" << endl;
    cin >> c1;
    
    
    cout << "ENTER NAME OF STUDENT 2:" << endl;
    cin >> n2;
    cout << "ENTER REGD NO OF STUDENT 2:" << endl;
    cin >> r2;
    cout << "ENTER COURSE OF STUDENT 2:" << endl;
    cin >> c2;
    
    Student student1(n1, r1, c1);
    Student student2(n2, r2, c2);

    cout << "\nStudent 1 Information:" << endl;
    student1.display();
    
    cout << "\nStudent 2 Information:" << endl;
    student2.display();
    
    return 0;
}
