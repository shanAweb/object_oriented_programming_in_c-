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
    void setrollno(int roll_no){
        this->roll_no = roll_no;
    }
    void setname (const char *name){
        this->name = name;
    }
    void setcgpa (float cgpa){
        this->cgpa = cgpa;
    }
    int getrollno(){
        return this->roll_no;
    }
    const char* getname(){
        return this->name;
    }
    float getcgpa(){
        return this->cgpa;
    }
    void display(){
        cout << "Roll no: " << this->roll_no << endl << "Name: " << this->name << endl << "CGPA: " << this->cgpa << endl;
    }
    ~Student(){

    }
};

int main(){
    Student s1, s2, s3;
        s1.setname("John");
        s2.setname("Alex");
        s3.setname("Rachael");

        s1.setrollno(1);
        s2.setrollno(2);
        s3.setrollno(3);

        s1.setcgpa(3.90);
        s2.setcgpa(3.81);
        s3.setcgpa(3.12);

        cout << "Student Records:" << endl;
        cout << "===Student 1===" << endl; 
        s1.display();
        cout << "===Student 2===" << endl;
        s2.display();
        cout << "===Student 3===" << endl;
        s3.display();

        return 0;

}