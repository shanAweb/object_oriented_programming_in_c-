#include <iostream>
using namespace std;
class Student{
    private:
    int rollNo;
    const char *name;

    public:
    // Default Constructor
    Student(){
        rollNo = 0;
        name = nullptr;
    }
    // Parameterized Constructor
    Student(int rollno, const char* name){
        this->rollNo = rollno;
        this->name = name;
    }
    // Setter
    void setname(const char* name){
        this->name = name;
    }
    // Getter
    const char* getname(){
        return this->name;
    }
    void setrollno(int rollno){
        this->rollNo = rollno;
    }
    int getrollno(){
        return this->rollNo;
    }
    // Display function
    void display(){
        cout << "Name:" << this->name << endl;
        cout << "Roll no: " << this->rollNo << endl;
    }
    ~Student(){
        cout << "Object Destroyed" << endl;
    }
};

int main(){
    // Student s1(5, "Shan")
    Student s1;
    s1.setname("Ammar");
    s1.setrollno(15);
    cout << "Name is: " << s1.getname() << endl;
    cout << "Roll no is: " << s1.getrollno() << endl;
    s1.display();
    return 0;
}