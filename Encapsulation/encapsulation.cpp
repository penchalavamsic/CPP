//performing encapsulation
//using setter and getter
#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    public:
    //setter
    void setName(string n){
        name=n;
    }
    //getter
    string getName(){
        cout<<name;
    }
};
int main(){
    Person p;
    p.setName("vishnu");
    cout<<p.getName();
}