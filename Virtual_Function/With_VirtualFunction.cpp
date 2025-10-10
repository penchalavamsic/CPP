//With Virtual Function
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void shout(){
        cout<<"Animal shouts";
    }
};
class Dog:public Animal{
    public:
    void shout() override{
        cout<<"Dog barks";
    }
};
int main(){
    Animal *a;
    Dog d;
    a=&d;
    a->shout(); //calls dog function
    cout<<endl;
    d.shout();
    cout<<endl;
    a->Animal::shout(); //explicity calling base class //using scope resolution operator

}