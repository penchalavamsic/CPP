//Using paramterized constructor 
#include<iostream> 
using namespace std; 
class Employee{ 
    public: 
    int id; 
    string name;
    double salary;
    Employee(int i, string n, double salary){
        id=i;
        name=n;
        this->salary=salary; //pointing to the variable
    }
    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    Employee e(10, "Vamsi", 45000); //intializing constructor
    e.display();
    return 0;
}