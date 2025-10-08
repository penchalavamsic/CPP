//student details
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno, marks;
    void input(){
        cout<<"enter name: ";
        getline(cin,name);
        cout<<"enter roll no: ";
        cin>>rollno;
        cout<<"enter marks: ";
        cin>>marks;
        cin.ignore(); //to avoid new lines
    }
    
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"roll no: "<<rollno<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};
int main(){
    Student s[3]; //object of size 3
    for(int i=0;i<3;i++){
        cout<<"Student: "<<i+1<<endl;
        s[i].input(); //stores in array
    }
    cin.ignore();
    for(int i=0;i<3;i++){
        cout<<"Student: "<<i+1<<"details"<<endl;
        s[i].display();
    }
}