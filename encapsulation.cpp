#include<iostream>
using namespace std;
class a{
    private:
    int salary;

    public:
        void setSalary(int s)
        {
           this->salary=s;
        }
    int getSalary()
    {
        return salary;
    }
};
int main(){
    a object;
    object.setSalary(5000);
    cout<<object.getSalary();
    return 0;
}

