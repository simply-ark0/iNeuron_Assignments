#include<iostream>
using namespace std;

class Student{
    
    private:
        int roll_no;
        int age;
        string name;
        string dept;
    
    public:
        Student(){
            this->roll_no = 0;
            this->age = 18;
            this->name = "John Doe";
            this->dept = "CSE";
        }

        Student(int roll_no, int age, string name, string dept){
            this->age = age;
            this->roll_no = roll_no;
            this->name = name;
            this->dept = dept;
        }

        void displayDetails(){
            cout<<"Roll No.: "<<this->roll_no<<endl;
            cout<<"Age: "<<this->age<<endl;
            cout<<"Name: "<<this->name<<endl;
            cout<<"Department: "<<this->dept<<endl;
        }

};

int main(){

    Student s1, s2(12, 22, "Arko", "MACS"), s3(54, 23, "Aman", "CSE");
    s1.displayDetails();
    s2.displayDetails();
    s3.displayDetails();

    return 0;

}