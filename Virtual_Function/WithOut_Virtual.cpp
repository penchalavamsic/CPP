//Without virtual function
#include<iostream>
using namespace std;
class Animal{
    public:
    void shout(){
        cout<<"Animal shouts";
    }
};
class Dog: public Animal{
    public:
    void shout(){
        cout<<"Dog barks\n";
    }
};
int main(){
    Animal *a; //creating pointer to Base class
    Dog d;//object for dervied class
    a=&d; 
    d.shout(); //access the derived class function
    a->shout(); //uses -> symbol when we have pointer
}