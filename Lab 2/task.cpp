#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float cgpa;

public:

    Student() : name(""), rollNo(0), cgpa(0.0f) {}

    void setName(const string& n) {
        if (!n.empty()) {
            name = n;
        }
    }

    void setRollNo(int r) {
        if (r > 0) {
            rollNo = r;
        }
    }

    void setCGPA(float c) {
        if (c >= 0.0f && c <= 4.0f) {
            cgpa = c;
        }
    }


    string getName() const {
        return name;
    }

    int getRollNo() const {
        return rollNo;
    }

    float getCGPA() const {
        return cgpa;
    }


    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1;          

    s1.setName("Shan");
    s1.setRollNo(12);
    s1.setCGPA(3.6f);

    s1.display();

    return 0;
}
