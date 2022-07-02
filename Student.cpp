#include <iostream>

using namespace std;

class Student{
    int rollNo;
    string name;
    int marks1,marks2,marks3;
    
    public:
    Student(int rollNo,string name,int marks1,int marks2,int marks3){
        this->rollNo=rollNo;
        this->name=name;
        this->marks1=marks1;
        this->marks2=marks2;
        this->marks3=marks3;
    }
    int totalMarks(){
        return marks1+marks2+marks3;
    }
    char grade(){
        return totalMarks()>240?'A':totalMarks()>180?'B':'C';
    }
};

int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll Number of a Student: ";
    cin>>roll;
    cin.ignore();
    cout<<"Enter Name of a Student: ";
    getline(cin, name);
    cout<<"Enter Marks in 3 Subjects ";
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout<<"Total Marks: "<<s.totalMarks()<<endl;
    cout<<"Grade of Student: "<<s.grade()<<endl;

    return 0;
}
