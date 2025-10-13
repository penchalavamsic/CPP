//Employee Payroll System
//uncompleted
#include<iostream>
using namespace std;
class Employee{
    private:
        string name;
        int id;
        float baseSalary;
    protected:
        float bonus;
    public:
        Employee(string n, int i, float bs):name(n), id(i), baseSalary(bs){}
        string getName(){
            return name;
        }
        int getId(){
            return id;
        }
        float getBaseSalary(){
            return baseSalary;
        }
        virtual void calculateBonus(){
            bonus=0;
        };
        virtual void display(){
            cout<<"Name: "<<getName()<<endl;
            cout<<"ID: "<<getId()<<endl;
            cout<<"Base Salary: "<<getBaseSalary()<<endl;

        }
        virtual ~Employee(){
            cout<<"Employeed cleaned";
        }
};
class Manager:public Employee{

    void calculateBonus(){
        bonus=(getBaseSalary())*0.40;
    }
    void display(){
        cout<<"**Manager**"<<endl;
        cout<<"Name: "<<getName()<<endl;
        cout<<"ID: "<<getId()<<endl;
        cout<<"Total Salary: "<<bonus+getBaseSalary();
    }
};
class Developer:public Employee{
    void calculateBonus(){
        bonus=(getBaseSalary())*0.25;
    }
    void display(){
        cout<<"**Developer**"<<endl;
        cout<<"Name: "<<getName()<<endl;
        cout<<"ID: "<<getId()<<endl;
        cout<<"Total Salary: "<<bonus+getBaseSalary();
    }
};
int main(){
    int employees;
    cout<<"Enter no of employees";
    cin>>employees;
    Employee **e=new Employee*[employees]; //memory for employee
    int *empTrack=new int[employees]; //for choosing Manager/ developer
    int choice;
    cout<<"Enter choice";
    cin>>choice;
    for(int i=0;i<employees;i++){
        
    }
}
