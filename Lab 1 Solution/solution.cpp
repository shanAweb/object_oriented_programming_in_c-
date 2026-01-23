#include<iostream>
using namespace std;
class Student{
    private:
        int roll_no;
        const char *name;
        float cgpa;
    public:
    Student(){
        this->roll_no = 0;
        this->name = nullptr;
        this->cgpa = 0.0;
    }
    Student(int roll_no, const char *name, float cgpa){
        this->roll_no = roll_no;
        this->name = name;
        this->cgpa = cgpa;
    }
    void display(){
        cout << "Roll no: " << this->roll_no << endl << "Name: " << this->name << endl << "CGPA: " << this->cgpa << endl;
    }
    ~Student(){
       cout << "Destroying the object" << endl;
    }
};

int main(){
    Student s1(1, "John", 3.92);
    Student s2(2, "Alex", 3.93);
    Student s3(3, "Rachel", 3.98);

        cout << "Student Records:" << endl;
        cout << "===Student 1===" << endl; 
        s1.display();
        cout << "===Student 2===" << endl;
        s2.display();
        cout << "===Student 3===" << endl;
        s3.display();

        return 0;

}